#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_Display1.h"

#include "session/org_deepin_dde_Display1_Monitor.hpp"

class SessionDisplay1Proxy : public DBusProxyBase {
public:
    SessionDisplay1Proxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr)
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"Brightnes", "Monitors", "Primary", "ScreenWidth", "ScreenHeight", "PrimaryRect"}));
        InitFilterMethods(QStringList({"SetBrightness"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new org::deepin::dde::Display1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
    virtual void signalMonitorCustom()
    {
    SubPathInit("Monitors", [=](QString path){
            QString suffix = path.right(path.size() - (path.lastIndexOf("/") + 1));
            QString proxyPath = "/com/deepin/daemon/Display/" + suffix;
            qInfo() << "create display.Monitor path proxy:" << proxyPath << "to" << path;
            return new SessionDisplay1MonitorProxy(m_dbusName,
                path,
                "org.deepin.dde.Display1.Monitor",
                m_proxyDbusName,
                proxyPath,
                "com.deepin.daemon.Display.Monitor",
                m_dbusType);
        });
    }
private:
    org::deepin::dde::Display1 *m_dbusProxy;
};


