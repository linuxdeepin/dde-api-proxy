#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_daemon_Launcher1.h"

class SessionDaemonLauncher1Proxy : public DBusProxyBase {
public:
    SessionDaemonLauncher1Proxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({}));
        InitFilterMethods(QStringList({"GetAllItemInfos"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new org::deepin::dde::daemon::Launcher1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
    virtual void signalMonitorCustom()
    {
        connect(m_dbusProxy, &org::deepin::dde::daemon::Launcher1::ItemChanged, this, [this](QString p1, LauncherItemInfo p2, int p3){
            QDBusMessage msg = QDBusMessage::createSignal(m_proxyDbusPath, m_proxyDbusInterface, "ItemChanged");
            QList<QVariant> arguments;
            QVariant p2v;
            p2v.setValue(p2);
            arguments << p1 << p2v << p3;
            msg.setArguments(arguments);
            QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).send(msg);
            
        });
    }
private:
    org::deepin::dde::daemon::Launcher1 *m_dbusProxy;
};


