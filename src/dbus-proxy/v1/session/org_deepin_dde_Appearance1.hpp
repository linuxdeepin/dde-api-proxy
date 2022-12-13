#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_Appearance1.h"

class SessionAppearance1Proxy : public DBusProxyBase {
public:
    SessionAppearance1Proxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr)
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"FontSize", "GtkTheme", "WallpaperURIs"}));
        InitFilterMethods(QStringList({"List", "SetMonitorBackground", "Set"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new org::deepin::dde::Appearance1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::Appearance1 *m_dbusProxy;
};


