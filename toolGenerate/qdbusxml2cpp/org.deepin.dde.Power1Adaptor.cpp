/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/system/org.deepin.dde.Power1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Power1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Power1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Power1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class Power1Adaptor
 */

Power1Adaptor::Power1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

Power1Adaptor::~Power1Adaptor()
{
    // destructor
}

double Power1Adaptor::batteryCapacity() const
{
    // get the value of property BatteryCapacity
    return qvariant_cast< double >(parent()->property("BatteryCapacity"));
}

double Power1Adaptor::batteryPercentage() const
{
    // get the value of property BatteryPercentage
    return qvariant_cast< double >(parent()->property("BatteryPercentage"));
}

uint Power1Adaptor::batteryStatus() const
{
    // get the value of property BatteryStatus
    return qvariant_cast< uint >(parent()->property("BatteryStatus"));
}

qulonglong Power1Adaptor::batteryTimeToEmpty() const
{
    // get the value of property BatteryTimeToEmpty
    return qvariant_cast< qulonglong >(parent()->property("BatteryTimeToEmpty"));
}

qulonglong Power1Adaptor::batteryTimeToFull() const
{
    // get the value of property BatteryTimeToFull
    return qvariant_cast< qulonglong >(parent()->property("BatteryTimeToFull"));
}

bool Power1Adaptor::cpuBoost() const
{
    // get the value of property CpuBoost
    return qvariant_cast< bool >(parent()->property("CpuBoost"));
}

QString Power1Adaptor::cpuGovernor() const
{
    // get the value of property CpuGovernor
    return qvariant_cast< QString >(parent()->property("CpuGovernor"));
}

bool Power1Adaptor::hasBattery() const
{
    // get the value of property HasBattery
    return qvariant_cast< bool >(parent()->property("HasBattery"));
}

bool Power1Adaptor::hasLidSwitch() const
{
    // get the value of property HasLidSwitch
    return qvariant_cast< bool >(parent()->property("HasLidSwitch"));
}

bool Power1Adaptor::isBalancePerformanceSupported() const
{
    // get the value of property IsBalancePerformanceSupported
    return qvariant_cast< bool >(parent()->property("IsBalancePerformanceSupported"));
}

bool Power1Adaptor::isBalanceSupported() const
{
    // get the value of property IsBalanceSupported
    return qvariant_cast< bool >(parent()->property("IsBalanceSupported"));
}

bool Power1Adaptor::isHighPerformanceSupported() const
{
    // get the value of property IsHighPerformanceSupported
    return qvariant_cast< bool >(parent()->property("IsHighPerformanceSupported"));
}

bool Power1Adaptor::isPowerSaveSupported() const
{
    // get the value of property IsPowerSaveSupported
    return qvariant_cast< bool >(parent()->property("IsPowerSaveSupported"));
}

QString Power1Adaptor::mode() const
{
    // get the value of property Mode
    return qvariant_cast< QString >(parent()->property("Mode"));
}

bool Power1Adaptor::onBattery() const
{
    // get the value of property OnBattery
    return qvariant_cast< bool >(parent()->property("OnBattery"));
}

bool Power1Adaptor::powerSavingModeAuto() const
{
    // get the value of property PowerSavingModeAuto
    return qvariant_cast< bool >(parent()->property("PowerSavingModeAuto"));
}

void Power1Adaptor::setPowerSavingModeAuto(bool value)
{
    // set the value of property PowerSavingModeAuto
    parent()->setProperty("PowerSavingModeAuto", QVariant::fromValue(value));
}

uint Power1Adaptor::powerSavingModeAutoBatteryPercent() const
{
    // get the value of property PowerSavingModeAutoBatteryPercent
    return qvariant_cast< uint >(parent()->property("PowerSavingModeAutoBatteryPercent"));
}

bool Power1Adaptor::powerSavingModeAutoWhenBatteryLow() const
{
    // get the value of property PowerSavingModeAutoWhenBatteryLow
    return qvariant_cast< bool >(parent()->property("PowerSavingModeAutoWhenBatteryLow"));
}

void Power1Adaptor::setPowerSavingModeAutoWhenBatteryLow(bool value)
{
    // set the value of property PowerSavingModeAutoWhenBatteryLow
    parent()->setProperty("PowerSavingModeAutoWhenBatteryLow", QVariant::fromValue(value));
}

QString Power1Adaptor::powerSavingModeBrightnessData() const
{
    // get the value of property PowerSavingModeBrightnessData
    return qvariant_cast< QString >(parent()->property("PowerSavingModeBrightnessData"));
}

uint Power1Adaptor::powerSavingModeBrightnessDropPercent() const
{
    // get the value of property PowerSavingModeBrightnessDropPercent
    return qvariant_cast< uint >(parent()->property("PowerSavingModeBrightnessDropPercent"));
}

void Power1Adaptor::setPowerSavingModeBrightnessDropPercent(uint value)
{
    // set the value of property PowerSavingModeBrightnessDropPercent
    parent()->setProperty("PowerSavingModeBrightnessDropPercent", QVariant::fromValue(value));
}

bool Power1Adaptor::powerSavingModeEnabled() const
{
    // get the value of property PowerSavingModeEnabled
    return qvariant_cast< bool >(parent()->property("PowerSavingModeEnabled"));
}

void Power1Adaptor::setPowerSavingModeEnabled(bool value)
{
    // set the value of property PowerSavingModeEnabled
    parent()->setProperty("PowerSavingModeEnabled", QVariant::fromValue(value));
}

bool Power1Adaptor::powerSystemAutoToSleepWhenFree() const
{
    // get the value of property PowerSystemAutoToSleepWhenFree
    return qvariant_cast< bool >(parent()->property("PowerSystemAutoToSleepWhenFree"));
}

void Power1Adaptor::setPowerSystemAutoToSleepWhenFree(bool value)
{
    // set the value of property PowerSystemAutoToSleepWhenFree
    parent()->setProperty("PowerSystemAutoToSleepWhenFree", QVariant::fromValue(value));
}

QList<QDBusObjectPath> Power1Adaptor::GetBatteries()
{
    // handle method call org.deepin.dde.Power1.GetBatteries
    QList<QDBusObjectPath> batteries;
    QMetaObject::invokeMethod(parent(), "GetBatteries", Q_RETURN_ARG(QList<QDBusObjectPath>, batteries));
    return batteries;
}

void Power1Adaptor::Refresh()
{
    // handle method call org.deepin.dde.Power1.Refresh
    QMetaObject::invokeMethod(parent(), "Refresh");
}

void Power1Adaptor::RefreshBatteries()
{
    // handle method call org.deepin.dde.Power1.RefreshBatteries
    QMetaObject::invokeMethod(parent(), "RefreshBatteries");
}

void Power1Adaptor::RefreshMains()
{
    // handle method call org.deepin.dde.Power1.RefreshMains
    QMetaObject::invokeMethod(parent(), "RefreshMains");
}

void Power1Adaptor::SetMode(const QString &mode)
{
    // handle method call org.deepin.dde.Power1.SetMode
    QMetaObject::invokeMethod(parent(), "SetMode", Q_ARG(QString, mode));
}

