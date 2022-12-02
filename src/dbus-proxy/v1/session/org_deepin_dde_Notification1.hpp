#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_Notification1.h"

class SessionNotification1Proxy : public DBusProxyBase {
    
public:
    SessionNotification1Proxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({}));
        InitFilterMethods(QStringList({"Nofity"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::Notification1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
    virtual void signalMonitorCustom()
    {
        connect(m_dbusProxy, &org::deepin::dde::Notification1::NotificationClosed, this, [this](uint p1, uint p2){
            QDBusMessage msg = QDBusMessage::createSignal(m_proxyDbusPath, m_proxyDbusInterface, "NotificationClosed");
            QList<QVariant> arguments;
            arguments << p1 << p2;
            msg.setArguments(arguments);
            QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).send(msg);
            
        });
    }
private:
    org::deepin::dde::Notification1 *m_dbusProxy;
};


