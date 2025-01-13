/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/system/com.deepin.daemon.Accounts.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.AccountsAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Accounts.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DAEMON_ACCOUNTSADAPTOR_H
#define COM_DEEPIN_DAEMON_ACCOUNTSADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Accounts.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.daemon.Accounts
 */
class AccountsAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.daemon.Accounts")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.daemon.Accounts\">\n"
"    <method name=\"AllowGuestAccount\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"CreateGuestAccount\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"CreateUser\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"i\"/>\n"
"      <arg direction=\"out\" type=\"o\"/>\n"
"    </method>\n"
"    <method name=\"DeleteUser\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"GetGroups\">\n"
"      <arg direction=\"out\" type=\"as\"/>\n"
"    </method>\n"
"    <method name=\"GetPresetGroups\">\n"
"      <arg direction=\"in\" type=\"i\"/>\n"
"      <arg direction=\"out\" type=\"as\"/>\n"
"    </method>\n"
"    <method name=\"FindUserById\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"FindUserByName\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"IsPasswordValid\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"i\"/>\n"
"    </method>\n"
"    <method name=\"IsUsernameValid\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"      <arg direction=\"out\" type=\"i\"/>\n"
"    </method>\n"
"    <method name=\"RandUserIcon\">\n"
"      <arg direction=\"out\" type=\"s\"/>\n"
"    </method>\n"
"    <signal name=\"UserAdded\">\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <signal name=\"UserDeleted\">\n"
"      <arg type=\"s\"/>\n"
"    </signal>\n"
"    <property access=\"read\" type=\"as\" name=\"UserList\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"GuestIcon\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"AllowGuest\"/>\n"
"  </interface>\n"
        "")
public:
    AccountsAdaptor(QObject *parent);
    virtual ~AccountsAdaptor();

public: // PROPERTIES
    Q_PROPERTY(bool AllowGuest READ allowGuest)
    bool allowGuest() const;

    Q_PROPERTY(QString GuestIcon READ guestIcon)
    QString guestIcon() const;

    Q_PROPERTY(QStringList UserList READ userList)
    QStringList userList() const;

public Q_SLOTS: // METHODS
    void AllowGuestAccount(bool in0);
    QString CreateGuestAccount();
    QDBusObjectPath CreateUser(const QString &in0, const QString &in1, int in2);
    void DeleteUser(const QString &in0, bool in1);
    QString FindUserById(const QString &in0);
    QString FindUserByName(const QString &in0);
    QStringList GetGroups();
    QStringList GetPresetGroups(int in0);
    bool IsPasswordValid(const QString &in0, QString &out1, int &out2);
    bool IsUsernameValid(const QString &in0, QString &out1, int &out2);
    QString RandUserIcon();
Q_SIGNALS: // SIGNALS
    void UserAdded(const QString &in0);
    void UserDeleted(const QString &in0);
};

#endif
