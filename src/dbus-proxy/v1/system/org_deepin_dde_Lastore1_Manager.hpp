#pragma once

#include "dbusproxybase.hpp"
#include "system_org_deepin_dde_Lastore1_Manager.h"
#include "system_org_deepin_dde_Lastore1_Updater.h"

class SystemLastore1ManagerProxy : public DBusProxyBase {
public:
    SystemLastore1ManagerProxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({}));
        InitFilterMethods(QStringList({"GetArchivesInfo", "UpdateSource", "CleanJob", "PackageInstallable", "InstallPackage", "PackageExists"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new org::deepin::dde::lastore1::Manager(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        m_dbusUpdaterProxy = new org::deepin::dde::lastore1::Updater(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        return m_dbusProxy;
    }
    virtual void signalMonitorCustom()
    {
        // 目前的Proxy封装，对于同PATH下不同Interface没有处理，且因为PATH独占，不能同时代理Manager和Updater；因此暂时在Manager里面加上对Updater的代理。
        QString updaterProxyInterface;
        if (m_proxyDbusName == "com.deepin.lastore") {
            updaterProxyInterface = "com.deepin.lastore.Updater";
        } else if (m_proxyDbusName == "org.deepin.lastore1") {
            updaterProxyInterface = "org.deepin.lastore1.Updater";
        }
        QStringList updaterFilterProps{"UpdatablePackages", "UpdatableApps"};
        connect(m_dbusUpdaterProxy, &DBusExtendedAbstractInterface::propertyChanged, this, [=](const QString &propName, const QVariant &value){
            if (!updaterFilterProps.contains(propName)) {
                qInfo() << updaterProxyInterface << "propertyChanged-filter:" << propName << "is not allowed.";
                return;
            }
            QDBusMessage msg = QDBusMessage::createSignal(m_proxyDbusPath, "org.freedesktop.DBus.Properties", "PropertiesChanged");
            QList<QVariant> arguments;
            arguments.push_back(updaterProxyInterface);
            QVariantMap changedProps;
            changedProps.insert(propName, value);
            arguments.push_back(changedProps);
            arguments.push_back(QStringList());
            msg.setArguments(arguments);
            QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).send(msg);
        });
    }
private:
    org::deepin::dde::lastore1::Manager *m_dbusProxy;
    org::deepin::dde::lastore1::Updater *m_dbusUpdaterProxy;
};


