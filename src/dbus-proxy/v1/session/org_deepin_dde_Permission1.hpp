#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_Permission1.h"

class SessionPermission1Proxy : public DBusProxyBase {
    
public:
    SessionPermission1Proxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        // InitFilterProperies(QStringList({}));
        // InitFilterMethods(QStringList({}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::Permission1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
    virtual void signalMonitorCustom()
    {
        connect(m_dbusProxy, &org::deepin::dde::Permission1::PermissionInfoChanged, this, [this](){
            QDBusMessage msg = QDBusMessage::createSignal(m_proxyDbusPath, m_proxyDbusInterface, "PermissionInfoChanged");
            QList<QVariant> arguments;
            msg.setArguments(arguments);
            QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).send(msg);
            
        });
        connect(m_dbusProxy, &org::deepin::dde::Permission1::PermissionEnableChanged, this, [this](QString p1, QString p2, bool p3){
            QDBusMessage msg = QDBusMessage::createSignal(m_proxyDbusPath, m_proxyDbusInterface, "PermissionEnableChanged");
            QList<QVariant> arguments;
            arguments << p1 << p2 << p3;
            msg.setArguments(arguments);
            QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).send(msg);
            
        });
    }
private:
    org::deepin::dde::Permission1 *m_dbusProxy;
};
