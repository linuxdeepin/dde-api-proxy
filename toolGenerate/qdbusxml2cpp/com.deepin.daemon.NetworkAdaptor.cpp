/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.daemon.Network.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.NetworkAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Network.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.NetworkAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class NetworkAdaptor
 */

NetworkAdaptor::NetworkAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

NetworkAdaptor::~NetworkAdaptor()
{
    // destructor
}

QString NetworkAdaptor::activeConnections() const
{
    // get the value of property ActiveConnections
    return qvariant_cast< QString >(parent()->property("ActiveConnections"));
}

QString NetworkAdaptor::connections() const
{
    // get the value of property Connections
    return qvariant_cast< QString >(parent()->property("Connections"));
}

uint NetworkAdaptor::connectivity() const
{
    // get the value of property Connectivity
    return qvariant_cast< uint >(parent()->property("Connectivity"));
}

QString NetworkAdaptor::devices() const
{
    // get the value of property Devices
    return qvariant_cast< QString >(parent()->property("Devices"));
}

bool NetworkAdaptor::networkingEnabled() const
{
    // get the value of property NetworkingEnabled
    return qvariant_cast< bool >(parent()->property("NetworkingEnabled"));
}

void NetworkAdaptor::setNetworkingEnabled(bool value)
{
    // set the value of property NetworkingEnabled
    parent()->setProperty("NetworkingEnabled", QVariant::fromValue(value));
}

uint NetworkAdaptor::state() const
{
    // get the value of property State
    return qvariant_cast< uint >(parent()->property("State"));
}

bool NetworkAdaptor::vpnEnabled() const
{
    // get the value of property VpnEnabled
    return qvariant_cast< bool >(parent()->property("VpnEnabled"));
}

void NetworkAdaptor::setVpnEnabled(bool value)
{
    // set the value of property VpnEnabled
    parent()->setProperty("VpnEnabled", QVariant::fromValue(value));
}

QString NetworkAdaptor::wirelessAccessPoints() const
{
    // get the value of property WirelessAccessPoints
    return qvariant_cast< QString >(parent()->property("WirelessAccessPoints"));
}

QDBusObjectPath NetworkAdaptor::ActivateAccessPoint(const QString &in0, const QDBusObjectPath &in1, const QDBusObjectPath &in2)
{
    // handle method call com.deepin.daemon.Network.ActivateAccessPoint
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "ActivateAccessPoint", Q_RETURN_ARG(QDBusObjectPath, out0), Q_ARG(QString, in0), Q_ARG(QDBusObjectPath, in1), Q_ARG(QDBusObjectPath, in2));
    return out0;
}

QDBusObjectPath NetworkAdaptor::ActivateConnection(const QString &in0, const QDBusObjectPath &in1)
{
    // handle method call com.deepin.daemon.Network.ActivateConnection
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "ActivateConnection", Q_RETURN_ARG(QDBusObjectPath, out0), Q_ARG(QString, in0), Q_ARG(QDBusObjectPath, in1));
    return out0;
}

void NetworkAdaptor::CancelSecret(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Network.CancelSecret
    QMetaObject::invokeMethod(parent(), "CancelSecret", Q_ARG(QString, in0), Q_ARG(QString, in1));
}

QDBusObjectPath NetworkAdaptor::CreateConnection(const QString &in0, const QDBusObjectPath &in1)
{
    // handle method call com.deepin.daemon.Network.CreateConnection
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "CreateConnection", Q_RETURN_ARG(QDBusObjectPath, out0), Q_ARG(QString, in0), Q_ARG(QDBusObjectPath, in1));
    return out0;
}

QDBusObjectPath NetworkAdaptor::CreateConnectionForAccessPoint(const QDBusObjectPath &in0, const QDBusObjectPath &in1)
{
    // handle method call com.deepin.daemon.Network.CreateConnectionForAccessPoint
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "CreateConnectionForAccessPoint", Q_RETURN_ARG(QDBusObjectPath, out0), Q_ARG(QDBusObjectPath, in0), Q_ARG(QDBusObjectPath, in1));
    return out0;
}

void NetworkAdaptor::DeactivateConnection(const QString &in0)
{
    // handle method call com.deepin.daemon.Network.DeactivateConnection
    QMetaObject::invokeMethod(parent(), "DeactivateConnection", Q_ARG(QString, in0));
}

void NetworkAdaptor::DeleteConnection(const QString &in0)
{
    // handle method call com.deepin.daemon.Network.DeleteConnection
    QMetaObject::invokeMethod(parent(), "DeleteConnection", Q_ARG(QString, in0));
}

void NetworkAdaptor::DisableWirelessHotspotMode(const QDBusObjectPath &in0)
{
    // handle method call com.deepin.daemon.Network.DisableWirelessHotspotMode
    QMetaObject::invokeMethod(parent(), "DisableWirelessHotspotMode", Q_ARG(QDBusObjectPath, in0));
}

void NetworkAdaptor::DisconnectDevice(const QDBusObjectPath &in0)
{
    // handle method call com.deepin.daemon.Network.DisconnectDevice
    QMetaObject::invokeMethod(parent(), "DisconnectDevice", Q_ARG(QDBusObjectPath, in0));
}

QDBusObjectPath NetworkAdaptor::EditConnection(const QString &in0, const QDBusObjectPath &in1)
{
    // handle method call com.deepin.daemon.Network.EditConnection
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "EditConnection", Q_RETURN_ARG(QDBusObjectPath, out0), Q_ARG(QString, in0), Q_ARG(QDBusObjectPath, in1));
    return out0;
}

void NetworkAdaptor::EnableDevice(const QDBusObjectPath &in0, bool in1)
{
    // handle method call com.deepin.daemon.Network.EnableDevice
    QMetaObject::invokeMethod(parent(), "EnableDevice", Q_ARG(QDBusObjectPath, in0), Q_ARG(bool, in1));
}

void NetworkAdaptor::EnableWirelessHotspotMode(const QDBusObjectPath &in0)
{
    // handle method call com.deepin.daemon.Network.EnableWirelessHotspotMode
    QMetaObject::invokeMethod(parent(), "EnableWirelessHotspotMode", Q_ARG(QDBusObjectPath, in0));
}

void NetworkAdaptor::FeedSecret(const QString &in0, const QString &in1, const QString &in2, bool in3)
{
    // handle method call com.deepin.daemon.Network.FeedSecret
    QMetaObject::invokeMethod(parent(), "FeedSecret", Q_ARG(QString, in0), Q_ARG(QString, in1), Q_ARG(QString, in2), Q_ARG(bool, in3));
}

QString NetworkAdaptor::GetAccessPoints(const QDBusObjectPath &in0)
{
    // handle method call com.deepin.daemon.Network.GetAccessPoints
    QString out0;
    QMetaObject::invokeMethod(parent(), "GetAccessPoints", Q_RETURN_ARG(QString, out0), Q_ARG(QDBusObjectPath, in0));
    return out0;
}

QString NetworkAdaptor::GetActiveConnectionInfo()
{
    // handle method call com.deepin.daemon.Network.GetActiveConnectionInfo
    QString out0;
    QMetaObject::invokeMethod(parent(), "GetActiveConnectionInfo", Q_RETURN_ARG(QString, out0));
    return out0;
}

QString NetworkAdaptor::GetAutoProxy()
{
    // handle method call com.deepin.daemon.Network.GetAutoProxy
    QString out0;
    QMetaObject::invokeMethod(parent(), "GetAutoProxy", Q_RETURN_ARG(QString, out0));
    return out0;
}

QString NetworkAdaptor::GetProxy(const QString &in0, QString &out1)
{
    // handle method call com.deepin.daemon.Network.GetProxy
    //return static_cast<YourObjectType *>(parent())->GetProxy(in0, out1);
}

QString NetworkAdaptor::GetProxyIgnoreHosts()
{
    // handle method call com.deepin.daemon.Network.GetProxyIgnoreHosts
    QString out0;
    QMetaObject::invokeMethod(parent(), "GetProxyIgnoreHosts", Q_RETURN_ARG(QString, out0));
    return out0;
}

QString NetworkAdaptor::GetProxyMethod()
{
    // handle method call com.deepin.daemon.Network.GetProxyMethod
    QString out0;
    QMetaObject::invokeMethod(parent(), "GetProxyMethod", Q_RETURN_ARG(QString, out0));
    return out0;
}

QStringList NetworkAdaptor::GetSupportedConnectionTypes()
{
    // handle method call com.deepin.daemon.Network.GetSupportedConnectionTypes
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "GetSupportedConnectionTypes", Q_RETURN_ARG(QStringList, out0));
    return out0;
}

QString NetworkAdaptor::GetWiredConnectionUuid(const QDBusObjectPath &in0)
{
    // handle method call com.deepin.daemon.Network.GetWiredConnectionUuid
    QString out0;
    QMetaObject::invokeMethod(parent(), "GetWiredConnectionUuid", Q_RETURN_ARG(QString, out0), Q_ARG(QDBusObjectPath, in0));
    return out0;
}

bool NetworkAdaptor::IsDeviceEnabled(const QDBusObjectPath &in0)
{
    // handle method call com.deepin.daemon.Network.IsDeviceEnabled
    bool out0;
    QMetaObject::invokeMethod(parent(), "IsDeviceEnabled", Q_RETURN_ARG(bool, out0), Q_ARG(QDBusObjectPath, in0));
    return out0;
}

bool NetworkAdaptor::IsPasswordValid(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Network.IsPasswordValid
    bool out0;
    QMetaObject::invokeMethod(parent(), "IsPasswordValid", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0), Q_ARG(QString, in1));
    return out0;
}

bool NetworkAdaptor::IsWirelessHotspotModeEnabled(const QDBusObjectPath &in0)
{
    // handle method call com.deepin.daemon.Network.IsWirelessHotspotModeEnabled
    bool out0;
    QMetaObject::invokeMethod(parent(), "IsWirelessHotspotModeEnabled", Q_RETURN_ARG(bool, out0), Q_ARG(QDBusObjectPath, in0));
    return out0;
}

QList<QDBusObjectPath> NetworkAdaptor::ListDeviceConnections(const QDBusObjectPath &in0)
{
    // handle method call com.deepin.daemon.Network.ListDeviceConnections
    QList<QDBusObjectPath> out0;
    QMetaObject::invokeMethod(parent(), "ListDeviceConnections", Q_RETURN_ARG(QList<QDBusObjectPath>, out0), Q_ARG(QDBusObjectPath, in0));
    return out0;
}

void NetworkAdaptor::RegisterSecretReceiver()
{
    // handle method call com.deepin.daemon.Network.RegisterSecretReceiver
    QMetaObject::invokeMethod(parent(), "RegisterSecretReceiver");
}

void NetworkAdaptor::RequestIPConflictCheck(const QString &in0, const QString &in1)
{
    // handle method call com.deepin.daemon.Network.RequestIPConflictCheck
    QMetaObject::invokeMethod(parent(), "RequestIPConflictCheck", Q_ARG(QString, in0), Q_ARG(QString, in1));
}

void NetworkAdaptor::RequestWirelessScan()
{
    // handle method call com.deepin.daemon.Network.RequestWirelessScan
    QMetaObject::invokeMethod(parent(), "RequestWirelessScan");
}

void NetworkAdaptor::SetAutoProxy(const QString &in0)
{
    // handle method call com.deepin.daemon.Network.SetAutoProxy
    QMetaObject::invokeMethod(parent(), "SetAutoProxy", Q_ARG(QString, in0));
}

void NetworkAdaptor::SetDeviceManaged(const QString &in0, bool in1)
{
    // handle method call com.deepin.daemon.Network.SetDeviceManaged
    QMetaObject::invokeMethod(parent(), "SetDeviceManaged", Q_ARG(QString, in0), Q_ARG(bool, in1));
}

void NetworkAdaptor::SetProxy(const QString &in0, const QString &in1, const QString &in2)
{
    // handle method call com.deepin.daemon.Network.SetProxy
    QMetaObject::invokeMethod(parent(), "SetProxy", Q_ARG(QString, in0), Q_ARG(QString, in1), Q_ARG(QString, in2));
}

void NetworkAdaptor::SetProxyIgnoreHosts(const QString &in0)
{
    // handle method call com.deepin.daemon.Network.SetProxyIgnoreHosts
    QMetaObject::invokeMethod(parent(), "SetProxyIgnoreHosts", Q_ARG(QString, in0));
}

void NetworkAdaptor::SetProxyMethod(const QString &in0)
{
    // handle method call com.deepin.daemon.Network.SetProxyMethod
    QMetaObject::invokeMethod(parent(), "SetProxyMethod", Q_ARG(QString, in0));
}
