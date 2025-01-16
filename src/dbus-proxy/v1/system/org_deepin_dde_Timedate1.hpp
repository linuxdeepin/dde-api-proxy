// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include "dbusproxybase.hpp"
#include "system_org_deepin_dde_Timedate1.h"

class SystemTimedate1Proxy : public DBusProxyBase {
public:
    SystemTimedate1Proxy(QString dbusName, QString dbusPath, QString dbusInterface,
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"NTPServer"}));
        InitFilterMethods(QStringList({"SetNTPServer"}));
        QMap<QString, QString> auth;
        auth["SetLocalRTC"] = "org.deepin.dde.api.proxy";
        auth["SetNTP"] = "org.deepin.dde.api.proxy";
        auth["SetNTPServer"] = "org.deepin.dde.api.proxy";
        auth["SetTime"] = "org.deepin.dde.api.proxy";
        auth["SetTimezone"] = "org.deepin.dde.api.proxy";
        InitCheckAuthorization(auth);
        ServiceStart();
    }
    virtual DDBusExtendedAbstractInterface *initConnect()
    {
        m_dbusProxy = new __System_Timedate1(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        return m_dbusProxy;
    }
private:
    __System_Timedate1 *m_dbusProxy;
};


