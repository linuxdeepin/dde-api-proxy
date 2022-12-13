#pragma once

#include "dbusproxybase.hpp"
#include "system_org_deepin_dde_Network1.h"

class SystemNetwork1Proxy : public DBusProxyBase {
public:
    SystemNetwork1Proxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({}));
        InitFilterMethods(QStringList({"EnableDevice"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new org::deepin::dde::Network1(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::Network1 *m_dbusProxy;
};


