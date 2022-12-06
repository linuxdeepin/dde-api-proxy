#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_daemon_Dock1.h"

#include "session/org_deepin_dde_daemon_Dock1_Entry.hpp"

class SessionDaemonDock1Proxy : public DBusProxyBase {
    
public:
    SessionDaemonDock1Proxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"FrontendWindowRect", "HideState", "HideMode"}));
        InitFilterMethods(QStringList({"RequestDock", "RequestUndock", "ActivateWindow"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::daemon::Dock1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
    virtual void signalMonitorCustom()
    {
        SubPathInit("Entries", [=](QString path){
            QString suffix = path.right(path.size() - (path.lastIndexOf("/") + 1));
            QString proxyPath = "/com/deepin/dde/daemon/Dock/entries/" + suffix;
            qInfo() << "create dock.entry path proxy:" << proxyPath << "to" << path;
            return new SessionDaemonDock1EntryProxy(m_dbusName, 
                path, 
                "org.deepin.dde.daemon.Dock1.Entry", 
                m_proxyDbusName, 
                proxyPath, 
                "com.deepin.dde.daemon.Dock.Entry",
                m_dbusType);
        });
    }
private:
    org::deepin::dde::daemon::Dock1 *m_dbusProxy;
};


