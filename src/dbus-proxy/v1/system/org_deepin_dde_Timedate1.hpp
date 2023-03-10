#pragma once

#include "dbusproxybase.hpp"
#include "system_org_deepin_dde_Timedate1.h"

class SystemTimedate1Proxy : public DBusProxyBase {
public:
    SystemTimedate1Proxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"NTPServer"}));
        InitFilterMethods(QStringList({"SetNTPServer"}));
        ServiceStart();
    }
    virtual DDBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new org::deepin::dde::Timedate1(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::Timedate1 *m_dbusProxy;
};


