#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_Network1.h"

class SessionNetwork1Proxy : public DBusProxyBase {
    
public:
    SessionNetwork1Proxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"State", "Devices", "WirelessAccessPoints"}));
        InitFilterMethods(QStringList({"GetActiveConnectionInfo", "IsDevicesEnabled", "EnableDevice", "RequestIPConflictCheck", "GetActiveConnectionInfo", "GetSupportedConnectionTypes", "GetProxyMethod"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::Network1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::Network1 *m_dbusProxy;
};


