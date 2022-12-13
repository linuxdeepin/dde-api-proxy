#pragma once

#include "dbusproxybase.hpp"
#include "system_org_deepin_dde_Grub2_Theme.h"

class SystemGrub2ThemeProxy : public DBusProxyBase {
public:
    SystemGrub2ThemeProxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({}));
        InitFilterMethods(QStringList({"SetBackgroundSourceFile"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new org::deepin::dde::grub2::Theme(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::grub2::Theme *m_dbusProxy;
};


