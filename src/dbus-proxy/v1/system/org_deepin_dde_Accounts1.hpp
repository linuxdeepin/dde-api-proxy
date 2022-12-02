#pragma once

#include "dbusproxybase.hpp"
#include "system_org_deepin_dde_Accounts1.h"

#include "system/org_deepin_dde_Accounts1_User.hpp"

class SystemAccounts1Proxy : public DBusProxyBase {
    
public:
    SystemAccounts1Proxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"UserList"}));
        InitFilterMethods(QStringList({"EnablePasswdChangedHandler", "FindUserByName"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::Accounts1(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        return m_dbusProxy;
    }
    virtual void signalMonitorCustom()
    {
        SubPathInit("UserList", [=](QString path){
            qInfo() << "create accounts path proxy";
            QString suffix = path.right(path.size() - (path.lastIndexOf("/") + 1));
            return new SystemAccounts1UserProxy(m_dbusName, 
                path, 
                "org.deepin.dde.Accounts1.User", 
                m_proxyDbusName, 
                "/com/deepin/daemon/Accounts/"+suffix, 
                "com.deepin.daemon.Accounts.User",
                m_dbusType);
        });
    }
private:
    org::deepin::dde::Accounts1 *m_dbusProxy;
};


