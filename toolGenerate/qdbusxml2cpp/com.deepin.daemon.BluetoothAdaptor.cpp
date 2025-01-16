/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.daemon.Bluetooth.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.BluetoothAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Bluetooth.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.BluetoothAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class BluetoothAdaptor
 */

BluetoothAdaptor::BluetoothAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

BluetoothAdaptor::~BluetoothAdaptor()
{
    // destructor
}

bool BluetoothAdaptor::canSendFile() const
{
    // get the value of property CanSendFile
    return qvariant_cast< bool >(parent()->property("CanSendFile"));
}

bool BluetoothAdaptor::displaySwitch() const
{
    // get the value of property DisplaySwitch
    return qvariant_cast< bool >(parent()->property("DisplaySwitch"));
}

void BluetoothAdaptor::setDisplaySwitch(bool value)
{
    // set the value of property DisplaySwitch
    parent()->setProperty("DisplaySwitch", QVariant::fromValue(value));
}

uint BluetoothAdaptor::state() const
{
    // get the value of property State
    return qvariant_cast< uint >(parent()->property("State"));
}

bool BluetoothAdaptor::transportable() const
{
    // get the value of property Transportable
    return qvariant_cast< bool >(parent()->property("Transportable"));
}

void BluetoothAdaptor::CancelTransferSession(const QDBusObjectPath &sessionPath)
{
    // handle method call com.deepin.daemon.Bluetooth.CancelTransferSession
    QMetaObject::invokeMethod(parent(), "CancelTransferSession", Q_ARG(QDBusObjectPath, sessionPath));
}

void BluetoothAdaptor::ClearUnpairedDevice()
{
    // handle method call com.deepin.daemon.Bluetooth.ClearUnpairedDevice
    QMetaObject::invokeMethod(parent(), "ClearUnpairedDevice");
}

void BluetoothAdaptor::Confirm(const QDBusObjectPath &device, bool accept)
{
    // handle method call com.deepin.daemon.Bluetooth.Confirm
    QMetaObject::invokeMethod(parent(), "Confirm", Q_ARG(QDBusObjectPath, device), Q_ARG(bool, accept));
}

void BluetoothAdaptor::ConnectDevice(const QDBusObjectPath &device, const QDBusObjectPath &adapter)
{
    // handle method call com.deepin.daemon.Bluetooth.ConnectDevice
    QMetaObject::invokeMethod(parent(), "ConnectDevice", Q_ARG(QDBusObjectPath, device), Q_ARG(QDBusObjectPath, adapter));
}

QString BluetoothAdaptor::DebugInfo()
{
    // handle method call com.deepin.daemon.Bluetooth.DebugInfo
    QString info;
    QMetaObject::invokeMethod(parent(), "DebugInfo", Q_RETURN_ARG(QString, info));
    return info;
}

void BluetoothAdaptor::DisconnectDevice(const QDBusObjectPath &device)
{
    // handle method call com.deepin.daemon.Bluetooth.DisconnectDevice
    QMetaObject::invokeMethod(parent(), "DisconnectDevice", Q_ARG(QDBusObjectPath, device));
}

void BluetoothAdaptor::FeedPasskey(const QDBusObjectPath &device, bool accept, uint passkey)
{
    // handle method call com.deepin.daemon.Bluetooth.FeedPasskey
    QMetaObject::invokeMethod(parent(), "FeedPasskey", Q_ARG(QDBusObjectPath, device), Q_ARG(bool, accept), Q_ARG(uint, passkey));
}

void BluetoothAdaptor::FeedPinCode(const QDBusObjectPath &device, bool accept, const QString &pinCode)
{
    // handle method call com.deepin.daemon.Bluetooth.FeedPinCode
    QMetaObject::invokeMethod(parent(), "FeedPinCode", Q_ARG(QDBusObjectPath, device), Q_ARG(bool, accept), Q_ARG(QString, pinCode));
}

QString BluetoothAdaptor::GetAdapters()
{
    // handle method call com.deepin.daemon.Bluetooth.GetAdapters
    QString adaptersJSON;
    QMetaObject::invokeMethod(parent(), "GetAdapters", Q_RETURN_ARG(QString, adaptersJSON));
    return adaptersJSON;
}

QString BluetoothAdaptor::GetDevices(const QDBusObjectPath &adapter)
{
    // handle method call com.deepin.daemon.Bluetooth.GetDevices
    QString devicesJSON;
    QMetaObject::invokeMethod(parent(), "GetDevices", Q_RETURN_ARG(QString, devicesJSON), Q_ARG(QDBusObjectPath, adapter));
    return devicesJSON;
}

void BluetoothAdaptor::RemoveDevice(const QDBusObjectPath &adapter, const QDBusObjectPath &device)
{
    // handle method call com.deepin.daemon.Bluetooth.RemoveDevice
    QMetaObject::invokeMethod(parent(), "RemoveDevice", Q_ARG(QDBusObjectPath, adapter), Q_ARG(QDBusObjectPath, device));
}

void BluetoothAdaptor::RequestDiscovery(const QDBusObjectPath &adapter)
{
    // handle method call com.deepin.daemon.Bluetooth.RequestDiscovery
    QMetaObject::invokeMethod(parent(), "RequestDiscovery", Q_ARG(QDBusObjectPath, adapter));
}

QDBusObjectPath BluetoothAdaptor::SendFiles(const QString &device, const QStringList &files)
{
    // handle method call com.deepin.daemon.Bluetooth.SendFiles
    QDBusObjectPath sessionPath;
    QMetaObject::invokeMethod(parent(), "SendFiles", Q_RETURN_ARG(QDBusObjectPath, sessionPath), Q_ARG(QString, device), Q_ARG(QStringList, files));
    return sessionPath;
}

void BluetoothAdaptor::SetAdapterAlias(const QDBusObjectPath &adapter, const QString &alias)
{
    // handle method call com.deepin.daemon.Bluetooth.SetAdapterAlias
    QMetaObject::invokeMethod(parent(), "SetAdapterAlias", Q_ARG(QDBusObjectPath, adapter), Q_ARG(QString, alias));
}

void BluetoothAdaptor::SetAdapterDiscoverable(const QDBusObjectPath &adapter, bool discoverable)
{
    // handle method call com.deepin.daemon.Bluetooth.SetAdapterDiscoverable
    QMetaObject::invokeMethod(parent(), "SetAdapterDiscoverable", Q_ARG(QDBusObjectPath, adapter), Q_ARG(bool, discoverable));
}

void BluetoothAdaptor::SetAdapterDiscoverableTimeout(const QDBusObjectPath &adapter, uint timeout)
{
    // handle method call com.deepin.daemon.Bluetooth.SetAdapterDiscoverableTimeout
    QMetaObject::invokeMethod(parent(), "SetAdapterDiscoverableTimeout", Q_ARG(QDBusObjectPath, adapter), Q_ARG(uint, timeout));
}

void BluetoothAdaptor::SetAdapterDiscovering(const QDBusObjectPath &adapter, bool discovering)
{
    // handle method call com.deepin.daemon.Bluetooth.SetAdapterDiscovering
    QMetaObject::invokeMethod(parent(), "SetAdapterDiscovering", Q_ARG(QDBusObjectPath, adapter), Q_ARG(bool, discovering));
}

void BluetoothAdaptor::SetAdapterPowered(const QDBusObjectPath &adapter, bool powered)
{
    // handle method call com.deepin.daemon.Bluetooth.SetAdapterPowered
    QMetaObject::invokeMethod(parent(), "SetAdapterPowered", Q_ARG(QDBusObjectPath, adapter), Q_ARG(bool, powered));
}

void BluetoothAdaptor::SetDeviceAlias(const QDBusObjectPath &device, const QString &alias)
{
    // handle method call com.deepin.daemon.Bluetooth.SetDeviceAlias
    QMetaObject::invokeMethod(parent(), "SetDeviceAlias", Q_ARG(QDBusObjectPath, device), Q_ARG(QString, alias));
}

void BluetoothAdaptor::SetDeviceTrusted(const QDBusObjectPath &device, bool trusted)
{
    // handle method call com.deepin.daemon.Bluetooth.SetDeviceTrusted
    QMetaObject::invokeMethod(parent(), "SetDeviceTrusted", Q_ARG(QDBusObjectPath, device), Q_ARG(bool, trusted));
}
