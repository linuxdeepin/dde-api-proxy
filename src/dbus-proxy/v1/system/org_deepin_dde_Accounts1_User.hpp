// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later
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
        QMap<QString, QString> auth;
        auth["AddGroup"] = "org.deepin.dde.api.proxy";
        auth["DeleteGroup"] = "org.deepin.dde.api.proxy";
        auth["DeleteIconFile"] = "org.deepin.dde.api.proxy";
        auth["DeleteSecretKey"] = "org.deepin.dde.api.proxy";
        auth["EnableNoPasswdLogin"] = "org.deepin.dde.api.proxy";
        auth["EnableWechatAuth"] = "org.deepin.dde.api.proxy";
        auth["SetAutomaticLogin"] = "org.deepin.dde.api.proxy";
        auth["SetCurrentWorkspace"] = "org.deepin.dde.api.proxy";
        auth["SetDesktopBackgrounds"] = "org.deepin.dde.api.proxy";
        auth["SetFullName"] = "org.deepin.dde.api.proxy";
        auth["SetGreeterBackground"] = "org.deepin.dde.api.proxy";
        auth["SetGroups"] = "org.deepin.dde.api.proxy";
        auth["SetHistoryLayout"] = "org.deepin.dde.api.proxy";
        auth["SetHomeDir"] = "org.deepin.dde.api.proxy";
        auth["SetIconFile"] = "org.deepin.dde.api.proxy";
        auth["SetLayout"] = "org.deepin.dde.api.proxy";
        auth["SetLocale"] = "org.deepin.dde.api.proxy";
        auth["SetLocked"] = "org.deepin.dde.api.proxy";
        auth["SetLongDateFormat"] = "org.deepin.dde.api.proxy";
        auth["SetMaxPasswordAge"] = "org.deepin.dde.api.proxy";
        auth["SetPassword"] = "org.deepin.dde.api.proxy";
        auth["SetPasswordHint"] = "org.deepin.dde.api.proxy";
        auth["SetQuickLogin"] = "org.deepin.dde.api.proxy";
        auth["SetSecretKey"] = "org.deepin.dde.api.proxy";
        auth["SetSecretQuestions"] = "org.deepin.dde.api.proxy";
        auth["SetShell"] = "org.deepin.dde.api.proxy";
        auth["SetShortDateFormat"] = "org.deepin.dde.api.proxy";
        auth["SetShortTimeFormat"] = "org.deepin.dde.api.proxy";
        auth["SetUse24HourFormat"] = "org.deepin.dde.api.proxy";
        auth["SetWeekBegins"] = "org.deepin.dde.api.proxy";
        auth["SetWeekdayFormat"] = "org.deepin.dde.api.proxy";
        auth["UpdateWechatAuthState"] = "org.deepin.dde.api.proxy";
        auth["VerifySecretQuestions"] = "org.deepin.dde.api.proxy";
        auth["SetLongTimeFormat"] = "org.deepin.dde.api.proxy";
        InitCheckAuthorization(auth);
        ServiceStart();
    }
    virtual DDBusExtendedAbstractInterface * initConnect() {
        m_dbusProxy = new org::deepin::dde::accounts1::User(m_dbusName, m_dbusPath, QDBusConnection::systemBus(), this);
        return m_dbusProxy;
    }
private:
    org::deepin::dde::accounts1::User *m_dbusProxy;
};


