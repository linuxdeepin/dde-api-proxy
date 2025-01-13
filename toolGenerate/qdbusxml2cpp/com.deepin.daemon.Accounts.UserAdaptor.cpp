/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/system/com.deepin.daemon.Accounts.User.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Accounts.UserAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Accounts.User.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Accounts.UserAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class UserAdaptor
 */

UserAdaptor::UserAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

UserAdaptor::~UserAdaptor()
{
    // destructor
}

int UserAdaptor::accountType() const
{
    // get the value of property AccountType
    return qvariant_cast< int >(parent()->property("AccountType"));
}

bool UserAdaptor::automaticLogin() const
{
    // get the value of property AutomaticLogin
    return qvariant_cast< bool >(parent()->property("AutomaticLogin"));
}

qulonglong UserAdaptor::createdTime() const
{
    // get the value of property CreatedTime
    return qvariant_cast< qulonglong >(parent()->property("CreatedTime"));
}

QStringList UserAdaptor::desktopBackgrounds() const
{
    // get the value of property DesktopBackgrounds
    return qvariant_cast< QStringList >(parent()->property("DesktopBackgrounds"));
}

QString UserAdaptor::fullName() const
{
    // get the value of property FullName
    return qvariant_cast< QString >(parent()->property("FullName"));
}

QString UserAdaptor::gid() const
{
    // get the value of property Gid
    return qvariant_cast< QString >(parent()->property("Gid"));
}

QString UserAdaptor::greeterBackground() const
{
    // get the value of property GreeterBackground
    return qvariant_cast< QString >(parent()->property("GreeterBackground"));
}

QStringList UserAdaptor::groups() const
{
    // get the value of property Groups
    return qvariant_cast< QStringList >(parent()->property("Groups"));
}

QStringList UserAdaptor::historyLayout() const
{
    // get the value of property HistoryLayout
    return qvariant_cast< QStringList >(parent()->property("HistoryLayout"));
}

QString UserAdaptor::homeDir() const
{
    // get the value of property HomeDir
    return qvariant_cast< QString >(parent()->property("HomeDir"));
}

QString UserAdaptor::iconFile() const
{
    // get the value of property IconFile
    return qvariant_cast< QString >(parent()->property("IconFile"));
}

QStringList UserAdaptor::iconList() const
{
    // get the value of property IconList
    return qvariant_cast< QStringList >(parent()->property("IconList"));
}

QString UserAdaptor::layout() const
{
    // get the value of property Layout
    return qvariant_cast< QString >(parent()->property("Layout"));
}

QString UserAdaptor::locale() const
{
    // get the value of property Locale
    return qvariant_cast< QString >(parent()->property("Locale"));
}

bool UserAdaptor::locked() const
{
    // get the value of property Locked
    return qvariant_cast< bool >(parent()->property("Locked"));
}

qulonglong UserAdaptor::loginTime() const
{
    // get the value of property LoginTime
    return qvariant_cast< qulonglong >(parent()->property("LoginTime"));
}

int UserAdaptor::longDateFormat() const
{
    // get the value of property LongDateFormat
    return qvariant_cast< int >(parent()->property("LongDateFormat"));
}

int UserAdaptor::longTimeFormat() const
{
    // get the value of property LongTimeFormat
    return qvariant_cast< int >(parent()->property("LongTimeFormat"));
}

int UserAdaptor::maxPasswordAge() const
{
    // get the value of property MaxPasswordAge
    return qvariant_cast< int >(parent()->property("MaxPasswordAge"));
}

bool UserAdaptor::noPasswdLogin() const
{
    // get the value of property NoPasswdLogin
    return qvariant_cast< bool >(parent()->property("NoPasswdLogin"));
}

QString UserAdaptor::passwordHint() const
{
    // get the value of property PasswordHint
    return qvariant_cast< QString >(parent()->property("PasswordHint"));
}

int UserAdaptor::passwordLastChange() const
{
    // get the value of property PasswordLastChange
    return qvariant_cast< int >(parent()->property("PasswordLastChange"));
}

QString UserAdaptor::passwordStatus() const
{
    // get the value of property PasswordStatus
    return qvariant_cast< QString >(parent()->property("PasswordStatus"));
}

QString UserAdaptor::shell() const
{
    // get the value of property Shell
    return qvariant_cast< QString >(parent()->property("Shell"));
}

int UserAdaptor::shortDateFormat() const
{
    // get the value of property ShortDateFormat
    return qvariant_cast< int >(parent()->property("ShortDateFormat"));
}

int UserAdaptor::shortTimeFormat() const
{
    // get the value of property ShortTimeFormat
    return qvariant_cast< int >(parent()->property("ShortTimeFormat"));
}

bool UserAdaptor::systemAccount() const
{
    // get the value of property SystemAccount
    return qvariant_cast< bool >(parent()->property("SystemAccount"));
}

QString UserAdaptor::uUID() const
{
    // get the value of property UUID
    return qvariant_cast< QString >(parent()->property("UUID"));
}

QString UserAdaptor::uid() const
{
    // get the value of property Uid
    return qvariant_cast< QString >(parent()->property("Uid"));
}

bool UserAdaptor::use24HourFormat() const
{
    // get the value of property Use24HourFormat
    return qvariant_cast< bool >(parent()->property("Use24HourFormat"));
}

QString UserAdaptor::userName() const
{
    // get the value of property UserName
    return qvariant_cast< QString >(parent()->property("UserName"));
}

int UserAdaptor::weekBegins() const
{
    // get the value of property WeekBegins
    return qvariant_cast< int >(parent()->property("WeekBegins"));
}

int UserAdaptor::weekdayFormat() const
{
    // get the value of property WeekdayFormat
    return qvariant_cast< int >(parent()->property("WeekdayFormat"));
}

int UserAdaptor::workspace() const
{
    // get the value of property Workspace
    return qvariant_cast< int >(parent()->property("Workspace"));
}

QString UserAdaptor::xSession() const
{
    // get the value of property XSession
    return qvariant_cast< QString >(parent()->property("XSession"));
}

void UserAdaptor::AddGroup(const QString &group)
{
    // handle method call com.deepin.daemon.Accounts.User.AddGroup
    QMetaObject::invokeMethod(parent(), "AddGroup", Q_ARG(QString, group));
}

void UserAdaptor::DeleteGroup(const QString &group)
{
    // handle method call com.deepin.daemon.Accounts.User.DeleteGroup
    QMetaObject::invokeMethod(parent(), "DeleteGroup", Q_ARG(QString, group));
}

void UserAdaptor::DeleteIconFile(const QString &iconFile)
{
    // handle method call com.deepin.daemon.Accounts.User.DeleteIconFile
    QMetaObject::invokeMethod(parent(), "DeleteIconFile", Q_ARG(QString, iconFile));
}

void UserAdaptor::EnableNoPasswdLogin(bool enabled)
{
    // handle method call com.deepin.daemon.Accounts.User.EnableNoPasswdLogin
    QMetaObject::invokeMethod(parent(), "EnableNoPasswdLogin", Q_ARG(bool, enabled));
}

bool UserAdaptor::IsPasswordExpired()
{
    // handle method call com.deepin.daemon.Accounts.User.IsPasswordExpired
    bool out0;
    QMetaObject::invokeMethod(parent(), "IsPasswordExpired", Q_RETURN_ARG(bool, out0));
    return out0;
}

int UserAdaptor::PasswordExpiredInfo(int &dayLeft)
{
    // handle method call com.deepin.daemon.Accounts.User.PasswordExpiredInfo
    //return static_cast<YourObjectType *>(parent())->PasswordExpiredInfo(dayLeft);
}

void UserAdaptor::SetAutomaticLogin(bool enabled)
{
    // handle method call com.deepin.daemon.Accounts.User.SetAutomaticLogin
    QMetaObject::invokeMethod(parent(), "SetAutomaticLogin", Q_ARG(bool, enabled));
}

void UserAdaptor::SetDesktopBackgrounds(const QStringList &backgrounds)
{
    // handle method call com.deepin.daemon.Accounts.User.SetDesktopBackgrounds
    QMetaObject::invokeMethod(parent(), "SetDesktopBackgrounds", Q_ARG(QStringList, backgrounds));
}

void UserAdaptor::SetFullName(const QString &name)
{
    // handle method call com.deepin.daemon.Accounts.User.SetFullName
    QMetaObject::invokeMethod(parent(), "SetFullName", Q_ARG(QString, name));
}

void UserAdaptor::SetGreeterBackground(const QString &background)
{
    // handle method call com.deepin.daemon.Accounts.User.SetGreeterBackground
    QMetaObject::invokeMethod(parent(), "SetGreeterBackground", Q_ARG(QString, background));
}

void UserAdaptor::SetGroups(const QStringList &groups)
{
    // handle method call com.deepin.daemon.Accounts.User.SetGroups
    QMetaObject::invokeMethod(parent(), "SetGroups", Q_ARG(QStringList, groups));
}

void UserAdaptor::SetHistoryLayout(const QStringList &layouts)
{
    // handle method call com.deepin.daemon.Accounts.User.SetHistoryLayout
    QMetaObject::invokeMethod(parent(), "SetHistoryLayout", Q_ARG(QStringList, layouts));
}

void UserAdaptor::SetHomeDir(const QString &home)
{
    // handle method call com.deepin.daemon.Accounts.User.SetHomeDir
    QMetaObject::invokeMethod(parent(), "SetHomeDir", Q_ARG(QString, home));
}

void UserAdaptor::SetIconFile(const QString &iconFile)
{
    // handle method call com.deepin.daemon.Accounts.User.SetIconFile
    QMetaObject::invokeMethod(parent(), "SetIconFile", Q_ARG(QString, iconFile));
}

void UserAdaptor::SetLayout(const QString &layout)
{
    // handle method call com.deepin.daemon.Accounts.User.SetLayout
    QMetaObject::invokeMethod(parent(), "SetLayout", Q_ARG(QString, layout));
}

void UserAdaptor::SetLocale(const QString &locale)
{
    // handle method call com.deepin.daemon.Accounts.User.SetLocale
    QMetaObject::invokeMethod(parent(), "SetLocale", Q_ARG(QString, locale));
}

void UserAdaptor::SetLocked(bool locked)
{
    // handle method call com.deepin.daemon.Accounts.User.SetLocked
    QMetaObject::invokeMethod(parent(), "SetLocked", Q_ARG(bool, locked));
}

void UserAdaptor::SetMaxPasswordAge(int nDays)
{
    // handle method call com.deepin.daemon.Accounts.User.SetMaxPasswordAge
    QMetaObject::invokeMethod(parent(), "SetMaxPasswordAge", Q_ARG(int, nDays));
}

void UserAdaptor::SetPassword(const QString &password)
{
    // handle method call com.deepin.daemon.Accounts.User.SetPassword
    QMetaObject::invokeMethod(parent(), "SetPassword", Q_ARG(QString, password));
}

void UserAdaptor::SetPasswordHint(const QString &hint)
{
    // handle method call com.deepin.daemon.Accounts.User.SetPasswordHint
    QMetaObject::invokeMethod(parent(), "SetPasswordHint", Q_ARG(QString, hint));
}

void UserAdaptor::SetShell(const QString &shell)
{
    // handle method call com.deepin.daemon.Accounts.User.SetShell
    QMetaObject::invokeMethod(parent(), "SetShell", Q_ARG(QString, shell));
}

