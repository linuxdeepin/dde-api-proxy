#pragma once

#include "dbusproxybase.hpp"
#include "system_org_deepin_dde_Power1.h"

class SystemPower1Proxy : public DBusProxyBase {
    
public:
    SystemPower1Proxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"PowerSavingModeEnabled", "BatteryPercentage", "HasBattery", "OnBattery"}));
        InitFilterMethods(QStringList({"SetMode"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::Power1(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::Power1 *m_dbusProxy;
};


