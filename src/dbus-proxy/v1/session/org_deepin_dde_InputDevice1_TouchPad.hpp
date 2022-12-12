#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_InputDevice1_TouchPad.h"

class SessionInputDevice1TouchPadProxy : public DBusProxyBase {
    
public:
    SessionInputDevice1TouchPadProxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"Exist", "TPadEnable", "DeviceList"}));
        InitFilterMethods(QStringList({}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::inputdevice1::TouchPad(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::inputdevice1::TouchPad *m_dbusProxy;
};


