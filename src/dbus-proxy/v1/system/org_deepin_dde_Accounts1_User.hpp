#pragma once

#include "dbusproxybase.hpp"
#include "system_org_deepin_dde_Accounts1_User.h"

class SystemAccounts1UserProxy : public DBusProxyBase {
public:
    SystemAccounts1UserProxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"PasswordLastChange", "AccountType", "IconFile", "UserName", "UUID", "NoPasswdLogin", "AutomaticLogin", "Locked"}));
        InitFilterMethods(QStringList({"EnableNoPasswdLogin", "SetAutomaticLogin", "SetLocked"}));
        ServiceStart();
    }
    virtual DDBusExtendedAbstractInterface * initConnect() {
        m_dbusProxy = new org::deepin::dde::accounts1::User(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::accounts1::User *m_dbusProxy;
};


