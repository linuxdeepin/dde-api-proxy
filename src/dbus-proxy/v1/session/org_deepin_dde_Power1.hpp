#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_Power1.h"

class SessionPower1Proxy : public DBusProxyBase {
public:
    SessionPower1Proxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr)
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"OnBattery", "SleepLock", "BatteryIsPresent", "BatteryPercentage", "BatteryState"}));
        InitFilterMethods(QStringList({}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new org::deepin::dde::Power1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::Power1 *m_dbusProxy;
};


