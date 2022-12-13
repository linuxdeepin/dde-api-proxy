#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_Bluetooth1.h"

class SessionBluetooth1Proxy : public DBusProxyBase {
public:
    SessionBluetooth1Proxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr)
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"CanSendFile", "State"}));
        InitFilterMethods(QStringList({"GetAdapters", "SetAdapterPowered", "GetDevices"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new org::deepin::dde::Bluetooth1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::Bluetooth1 *m_dbusProxy;
};


