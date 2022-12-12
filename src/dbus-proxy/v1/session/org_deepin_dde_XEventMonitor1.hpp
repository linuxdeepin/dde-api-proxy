#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_XEventMonitor1.h"

class SessionXEventMonitor1Proxy : public DBusProxyBase {
    
public:
    SessionXEventMonitor1Proxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({}));
        InitFilterMethods(QStringList({"RegisterFullScreenMotionFlag", "RegisterArea", "UnregisterArea"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::XEventMonitor1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
    virtual void signalMonitorCustom()
    {
        connect(m_dbusProxy, &org::deepin::dde::XEventMonitor1::ButtonPress, this, [this](int p1, int p2, int p3, QString p4){
            QDBusMessage msg = QDBusMessage::createSignal(m_proxyDbusPath, m_proxyDbusInterface, "ButtonPress");
            QList<QVariant> arguments;
            arguments << p1 << p2 << p3 << p4;
            msg.setArguments(arguments);
            QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).send(msg);
            
        });
        connect(m_dbusProxy, &org::deepin::dde::XEventMonitor1::ButtonRelease, this, [this](int p1, int p2, int p3, QString p4){
            QDBusMessage msg = QDBusMessage::createSignal(m_proxyDbusPath, m_proxyDbusInterface, "ButtonRelease");
            QList<QVariant> arguments;
            arguments << p1 << p2 << p3 << p4;
            msg.setArguments(arguments);
            QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).send(msg);
            
        });
        connect(m_dbusProxy, &org::deepin::dde::XEventMonitor1::KeyPress, this, [this](QString p1, int p2, int p3, QString p4){
            QDBusMessage msg = QDBusMessage::createSignal(m_proxyDbusPath, m_proxyDbusInterface, "KeyPress");
            QList<QVariant> arguments;
            arguments << p1 << p2 << p3 << p4;
            msg.setArguments(arguments);
            QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).send(msg);
            
        });
        connect(m_dbusProxy, &org::deepin::dde::XEventMonitor1::KeyRelease, this, [this](QString p1, int p2, int p3, QString p4){
            QDBusMessage msg = QDBusMessage::createSignal(m_proxyDbusPath, m_proxyDbusInterface, "KeyRelease");
            QList<QVariant> arguments;
            arguments << p1 << p2 << p3 << p4;
            msg.setArguments(arguments);
            QDBusConnection::connectToBus(m_dbusType, m_proxyDbusName).send(msg);
            
        });
    }
private:
    org::deepin::dde::XEventMonitor1 *m_dbusProxy;
};


