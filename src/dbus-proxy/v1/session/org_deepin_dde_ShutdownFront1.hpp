#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_ShutdownFront1.h"

class SessionShutdownFront1Proxy : public DBusProxyBase {
public:
    SessionShutdownFront1Proxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({}));
        InitFilterMethods(QStringList({"Restart", "Show"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new org::deepin::dde::ShutdownFront1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::ShutdownFront1 *m_dbusProxy;
};


