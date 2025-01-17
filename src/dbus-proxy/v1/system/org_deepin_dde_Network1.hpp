// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "dbusproxybase.hpp"
#include "system_org_deepin_dde_Network1.h"

class SystemNetwork1Proxy : public DBusProxyBase {
public:
    SystemNetwork1Proxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        QMap<QString, QString> auth;
        auth["EnableDevice"] = "org.deepin.dde.api.proxy";
        auth["ToggleWirelessEnabled"] = "org.deepin.dde.api.proxy";
        InitCheckAuthorization(auth);
        ServiceStart();
    }
    virtual DDBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new __System_Network1(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        return m_dbusProxy;
    }
private:
    __System_Network1 *m_dbusProxy;
};


