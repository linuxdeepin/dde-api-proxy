#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_Audio1_Source.h"

class SessionAudio1SourceProxy : public DBusProxyBase {
public:
    SessionAudio1SourceProxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr)
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"Mute", "Volume"}));
        InitFilterMethods(QStringList({"SetMute", "SetVolum"}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new org::deepin::dde::audio1::Source(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::audio1::Source *m_dbusProxy;
};


