/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0.5/session/org.desktopspec.permission.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.desktopspec.permissionAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.desktopspec.permission.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.desktopspec.permissionAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class PermissionAdaptor
 */

PermissionAdaptor::PermissionAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

PermissionAdaptor::~PermissionAdaptor()
{
    // destructor
}

bool PermissionAdaptor::GetPermissionEnable(const QString &permissionGroup, const QString &permissionId)
{
    // handle method call org.desktopspec.permission.GetPermissionEnable
    bool enable;
    QMetaObject::invokeMethod(parent(), "GetPermissionEnable", Q_RETURN_ARG(bool, enable), Q_ARG(QString, permissionGroup), Q_ARG(QString, permissionId));
    return enable;
}

QString PermissionAdaptor::GetPermissionInfo()
{
    // handle method call org.desktopspec.permission.GetPermissionInfo
    QString permissionInfo;
    QMetaObject::invokeMethod(parent(), "GetPermissionInfo", Q_RETURN_ARG(QString, permissionInfo));
    return permissionInfo;
}

QStringList PermissionAdaptor::GetRegisterAppPermissionIds(const QString &appId, const QString &permissionGroup)
{
    // handle method call org.desktopspec.permission.GetRegisterAppPermissionIds
    QStringList result;
    QMetaObject::invokeMethod(parent(), "GetRegisterAppPermissionIds", Q_RETURN_ARG(QStringList, result), Q_ARG(QString, appId), Q_ARG(QString, permissionGroup));
    return result;
}

QStringList PermissionAdaptor::PermissionList(const QString &permissionGroup)
{
    // handle method call org.desktopspec.permission.PermissionList
    QStringList results;
    QMetaObject::invokeMethod(parent(), "PermissionList", Q_RETURN_ARG(QStringList, results), Q_ARG(QString, permissionGroup));
    return results;
}

void PermissionAdaptor::RegistAppPermissions(const QString &appId, const QString &permissionGroup, PermissionsInfo permissionsInfo)
{
    // handle method call org.desktopspec.permission.RegistAppPermissions
    QMetaObject::invokeMethod(parent(), "RegistAppPermissions", Q_ARG(QString, appId), Q_ARG(QString, permissionGroup), Q_ARG(PermissionsInfo, permissionsInfo));
}

QString PermissionAdaptor::Request(const QString &appId, const QString &permissionGroup, const QString &permissionId, const QString &title, const QString &description)
{
    // handle method call org.desktopspec.permission.Request
    QString result;
    QMetaObject::invokeMethod(parent(), "Request", Q_RETURN_ARG(QString, result), Q_ARG(QString, appId), Q_ARG(QString, permissionGroup), Q_ARG(QString, permissionId), Q_ARG(QString, title), Q_ARG(QString, description));
    return result;
}

QString PermissionAdaptor::Request(const QString &appId, const QString &permissionGroup, const QString &permissionId)
{
    // handle method call org.desktopspec.permission.Request
    QString result;
    QMetaObject::invokeMethod(parent(), "Request", Q_RETURN_ARG(QString, result), Q_ARG(QString, appId), Q_ARG(QString, permissionGroup), Q_ARG(QString, permissionId));
    return result;
}

QStringList PermissionAdaptor::Request(const QString &appId, const QString &permissionGroup, const QStringList &permissionId)
{
    // handle method call org.desktopspec.permission.Request
    QStringList results;
    QMetaObject::invokeMethod(parent(), "Request", Q_RETURN_ARG(QStringList, results), Q_ARG(QString, appId), Q_ARG(QString, permissionGroup), Q_ARG(QStringList, permissionId));
    return results;
}

void PermissionAdaptor::Reset(const QString &appId, const QString &permissionGroup)
{
    // handle method call org.desktopspec.permission.Reset
    QMetaObject::invokeMethod(parent(), "Reset", Q_ARG(QString, appId), Q_ARG(QString, permissionGroup));
}

void PermissionAdaptor::Set(const QString &appId, const QString &permissionGroup, const QString &permissionId, const QString &value)
{
    // handle method call org.desktopspec.permission.Set
    QMetaObject::invokeMethod(parent(), "Set", Q_ARG(QString, appId), Q_ARG(QString, permissionGroup), Q_ARG(QString, permissionId), Q_ARG(QString, value));
}

bool PermissionAdaptor::SetPermissionEnable(const QString &permissionGroup, const QString &permissionId, bool enable)
{
    // handle method call org.desktopspec.permission.SetPermissionEnable
    bool result;
    QMetaObject::invokeMethod(parent(), "SetPermissionEnable", Q_RETURN_ARG(bool, result), Q_ARG(QString, permissionGroup), Q_ARG(QString, permissionId), Q_ARG(bool, enable));
    return result;
}

bool PermissionAdaptor::SetPermissionInfo(const QString &appId, const QString &permissionGroup, const QString &permissionId, const QString &value)
{
    // handle method call org.desktopspec.permission.SetPermissionInfo
    bool result;
    QMetaObject::invokeMethod(parent(), "SetPermissionInfo", Q_RETURN_ARG(bool, result), Q_ARG(QString, appId), Q_ARG(QString, permissionGroup), Q_ARG(QString, permissionId), Q_ARG(QString, value));
    return result;
}

void PermissionAdaptor::ShowDisablePermissionDialog(const QString &appId, const QString &permissionGroup, const QString &permissionId)
{
    // handle method call org.desktopspec.permission.ShowDisablePermissionDialog
    QMetaObject::invokeMethod(parent(), "ShowDisablePermissionDialog", Q_ARG(QString, appId), Q_ARG(QString, permissionGroup), Q_ARG(QString, permissionId));
}

