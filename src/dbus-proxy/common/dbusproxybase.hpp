#pragma once

#include <QDBusVirtualObject>
#include <QDBusAbstractInterface>
#include <DBusExtendedAbstractInterface>
#include <QThread>
#include <QDBusVirtualObject>

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QVector>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

// typdef DBusProxyBase*(*SubPathCB)();

class DBusProxyBase : public QDBusVirtualObject {
public:
    DBusProxyBase(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) : QDBusVirtualObject(parent)
        , m_dbusName(dbusName)
        , m_dbusPath(dbusPath)
        , m_dbusInterface(dbusInterface)
        , m_proxyDbusName(proxyDbusName)
        , m_proxyDbusPath(proxyDbusPath)
        , m_proxyDbusInterface(proxyDbusInterface)
        , m_dbusType(dbusType)
        , m_filterProperiesEnable(false)
        , m_filterMethodsEnable(false)
    {
        m_thread = new QThread(this);
        connect(m_thread, &QThread::started, this, &DBusProxyBase::threadRun);
        moveToThread(m_thread);
    }
    virtual	~DBusProxyBase() {
        QDBusConnection::connectToBus(QDBusConnection::SessionBus, m_proxyDbusName).unregisterObject(m_proxyDbusPath);
        if (m_proxy) {
            delete m_proxy;
        }
    }
    // handleMessageCustom:可选，无定义方法处理可不实现
    virtual	bool handleMessageCustom(const QDBusMessage &message, const QDBusConnection &connection) {return false;}
    // signalMonitorCustom:可选，无定义信号可不实现
    // TODO:封装自定义信号的统一处理，可实现所有转发自动处理
    virtual void signalMonitorCustom() {}
    virtual DBusExtendedAbstractInterface * initConnect() = 0;

    void ServiceStart()
    {
        qInfo() << "proxy:" << m_proxyDbusName << "to" << m_dbusName;
        m_thread->start();
    }
    void ServiceStop()
    {
        m_thread->quit();
    }
    // 不设置默认不检验，全部有权限；设置了后list中指定的才有权限
    void InitFilterProperies(QStringList list) {
        m_filterProperiesEnable = true;
        m_filterProperies = list;
    }
    // 不设置默认不检验，全部有权限；设置了后list中指定的才有权限
    void InitFilterMethods(QStringList list) {
        m_filterMethodsEnable = true;
        m_filterMethods = list;
    }

    virtual bool handleMessage(const QDBusMessage &message, const QDBusConnection &connection)
    {
        qInfo() << "[statistics]";
        qInfo() << " - proxy sender:" << getSenderProcess(message.service());
        qInfo() << " - proxy service:" << m_proxyDbusName;
        qInfo() << " - proxy path:" << m_proxyDbusPath;
        qInfo() << " - proxy interface:" << m_proxyDbusInterface;
        qInfo() << " - proxy method:" << message.member();
        qInfo() << " - proxy arguments:" << message.arguments();

        if (handleMessageCustom(message, connection)) {
            // 自定义处理成功则直接返回，否则执行通用处理
            return true;
        }
        if (message.interface() == m_proxyDbusInterface) {
            // qInfo() << "message.interface()=" << message.interface();
            if (m_filterMethodsEnable && !m_filterMethods.contains(message.member())) {
                qInfo() << m_proxyDbusInterface << "method-filter:" << message.member() << "is not allowed.";
                connection.send(message.createErrorReply("com.deepin.dde.error.NotAllowed", "is not allowed"));
                return true;
            }
            QDBusPendingCall call = m_proxy->asyncCallWithArgumentList(message.member(), message.arguments());
            call.waitForFinished();
            connection.send(message.createReply(call.reply().arguments()));
            return true;
        }
        if (message.interface() == "org.freedesktop.DBus.Properties") {
            QString calledInterface = message.arguments().at(0).toString();
            if (calledInterface != m_proxyDbusInterface) {
                qInfo() << m_proxyDbusInterface << "Properties-filter:" << calledInterface << "is not allowed.";
                connection.send(message.createErrorReply("com.deepin.dde.error.NotAllowed", "is not allowed"));
                return true;
            }
            QString prop = message.arguments().at(1).toString();
            if (prop.isEmpty() || (m_filterProperiesEnable && !m_filterProperies.contains(prop))) {
                qInfo() << m_proxyDbusInterface << "Properties-filter:" << prop << "is not allowed.";
                connection.send(message.createErrorReply("com.deepin.dde.error.NotAllowed", "is not allowed"));
                return true;
            }
            if (message.member() == "Get") {
                qInfo() << m_proxyDbusInterface << "Properties-Get:" << prop;
                QVariant var = m_proxy->property(prop.toStdString().c_str());
                if (!var.isValid()) {
                    qWarning() << m_proxyDbusInterface << "Properties-Get error: Unknow";
                    connection.send(message.createErrorReply("com.deepin.dde.error.Unknow", "unknow error"));
                } else {
                    connection.send(message.createReply(var));
                }
                return true;
            } else if (message.member() == "Set") {
                qInfo() << m_proxyDbusInterface << "Properties-Set:" << prop;
                m_proxy->setProperty(prop.toStdString().c_str(), message.arguments().at(2));
                connection.send(message.createReply());
                return true;
            }
        }
        return false;
    }
    virtual QString	introspect(const QString &path) const
    {
        return "";
    }

    void signalMonitor()
    {
        signalMonitorCustom();
        connect(m_proxy, &DBusExtendedAbstractInterface::propertyChanged, this, [this](const QString &propName, const QVariant &value){
            // qInfo() << "propertyChanged:" << propName << value;
            if (m_filterProperiesEnable && !m_filterProperies.contains(propName)) {
                qInfo() << m_proxyDbusInterface << "propertyChanged-filter:" << propName << "is not allowed.";
                return;
            }
            QDBusMessage msg = QDBusMessage::createSignal(m_proxyDbusPath, "org.freedesktop.DBus.Properties", "PropertiesChanged");
            QList<QVariant> arguments;
            arguments.push_back(m_proxyDbusInterface);
            QVariantMap changedProps;
            changedProps.insert(propName, value);
            arguments.push_back(changedProps);
            arguments.push_back(QStringList());
            msg.setArguments(arguments);
            QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).send(msg);
        });
    }
    template<typename Functor>
    void SubPathInit(QString propName, Functor func) {
        QVariant var = m_proxy->property(propName.toStdString().c_str());
        subPathHandler(var, m_pathMap, func);
        connect(m_proxy, &DBusExtendedAbstractInterface::propertyChanged, this, [=](const QString &name, const QVariant &value){
            if (name != propName) {
                return;
            }
            qInfo() << m_proxyDbusInterface << "propertyChanged-subPathChanged:" << name << value;
            subPathHandler(value, m_pathMap, func);
        });
    }
    // 额外提供这个SubPathInit可以指定pathMap，以此处理一个proxy包含多种子PATH的情况
    template<typename Functor>
    void SubPathInit(QString propName, QMap<QString, DBusProxyBase *> &pathMap, Functor func) {
        QVariant var = m_proxy->property(propName.toStdString().c_str());
        subPathHandler(var, pathMap, func);
        connect(m_proxy, &DBusExtendedAbstractInterface::propertyChanged, this, [&](const QString &name, const QVariant &value){
            if (name != propName) {
                return;
            }
            qInfo() << m_proxyDbusInterface << "propertyChanged-subPathChanged:" << name << value;
            subPathHandler(value, pathMap, func);
        });
    }

    // 创建和删除子PATH
    template<typename Functor>
    void subPathHandler(const QVariant &pathsVar, QMap<QString, DBusProxyBase *> &pathMap, Functor func) {
        QString varType(pathsVar.typeName());
        QStringList paths;
        if (varType == "QList<QDBusObjectPath>") {
            QList<QDBusObjectPath> pathsDbus = qvariant_cast<QList<QDBusObjectPath>>(pathsVar);
            for (auto pathDbus : pathsDbus) {
                paths.append(pathDbus.path());
            }
        } else if (varType == "QStringList") {
            paths = pathsVar.value<QStringList>();
        } else {
            qWarning() << m_proxyDbusInterface << "sub path handler, error variant type:" << pathsVar.typeName();
            return;
        }
        qInfo() << m_proxyDbusInterface << "sub path handler, paths:" << paths;
        QVector<QString> newPaths;
        QVector<QString> deletePaths;
        for (auto path : paths) {
            auto iter = pathMap.find(path);
            if (iter == pathMap.end()) {
                newPaths.push_back(path);
            }
        }
        for (auto existPath : pathMap.toStdMap()) {
            bool isFind = false;
            for (auto path : paths) {
                if (existPath.first == path) {
                    isFind = true;
                    break;
                }
            }
            if (!isFind) {
                deletePaths.push_back(existPath.first);
            }
        }
        for (auto addPath : newPaths) {
            qInfo() << m_proxyDbusInterface << "add sub path:" << addPath;
            pathMap.insert(addPath, func(addPath));
        }
        for (auto deletePath : deletePaths) {
            auto iter = pathMap.find(deletePath);
            if (iter != pathMap.end()) {
                DBusProxyBase *proxy = iter.value();
                if (proxy) {
                    qInfo() << m_proxyDbusInterface << "delete sub path:" << deletePath;
                    proxy->ServiceStop();
                    delete proxy;
                    pathMap.erase(iter);
                }
            }
        }
    }

    QString getSenderProcess(QString dbusService)
    {
        const unsigned int &pid = QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).interface()->servicePid(dbusService).value();
        QFile procCmd("/proc/" + QString::number(pid) + "/cmdline");
        QString cmd;
        if(procCmd.open(QIODevice::ReadOnly))
        {
            QList<QByteArray> cmds = procCmd.readAll().split('\0');
            cmd = QString(cmds.first());
        }
        return cmd;
    }

public slots:
    void threadRun()
    {
        m_proxy = initConnect();
        if (!QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).registerService(m_proxyDbusName)) {
            qWarning() << m_proxyDbusInterface << "failed to register service:" << QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).lastError().message();
            return;
        }
        if (!QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).registerVirtualObject(m_proxyDbusPath, this)) {
            qWarning() << m_proxyDbusInterface << "failed to register object:" << QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).lastError().message();
            return;
        }
        signalMonitor();
    }
protected:
    QString m_dbusName;
    QString m_dbusPath;
    QString m_dbusInterface;
    QString m_proxyDbusName;
    QString m_proxyDbusPath;
    QString m_proxyDbusInterface;
    QDBusConnection::BusType m_dbusType;
private:
    DBusExtendedAbstractInterface *m_proxy;
    bool m_filterProperiesEnable;
    QStringList m_filterProperies;
    bool m_filterMethodsEnable;
    QStringList m_filterMethods;
    QThread *m_thread;
    QMap<QString, DBusProxyBase *> m_pathMap;
};


