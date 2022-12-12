#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_Timedate1.h"

class SessionTimedate1Proxy : public DBusProxyBase {
    
public:
    SessionTimedate1Proxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"CanNTP", "NTP", "Timezone"}));
        InitFilterMethods(QStringList({"SetNTPServer"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::Timedate1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
    virtual void signalMonitorCustom()
    {
        connect(m_dbusProxy, &org::deepin::dde::Timedate1::TimeUpdate, this, [this](){
            QDBusMessage msg = QDBusMessage::createSignal(m_proxyDbusPath, m_proxyDbusInterface, "TimeUpdate");
            QList<QVariant> arguments;
            msg.setArguments(arguments);
            QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).send(msg);
            
        });
    }
private:
    org::deepin::dde::Timedate1 *m_dbusProxy;
};


