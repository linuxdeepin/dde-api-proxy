/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/system/org.deepin.dde.Power1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Power1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Power1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_POWER1ADAPTOR_H
#define ORG_DEEPIN_DDE_POWER1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Power1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.Power1
 */
class Power1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.Power1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.Power1\">\n"
"    <method name=\"GetBatteries\">\n"
"      <arg direction=\"out\" type=\"ao\" name=\"batteries\"/>\n"
"    </method>\n"
"    <method name=\"Refresh\"/>\n"
"    <method name=\"SetMode\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"mode\"/>\n"
"    </method>\n"
"    <method name=\"RefreshBatteries\"/>\n"
"    <method name=\"RefreshMains\"/>\n"
"    <signal name=\"BatteryDisplayUpdate\">\n"
"      <arg type=\"x\" name=\"timestamp\"/>\n"
"    </signal>\n"
"    <signal name=\"BatteryAdded\">\n"
"      <arg type=\"o\" name=\"objpath\"/>\n"
"    </signal>\n"
"    <signal name=\"BatteryRemoved\">\n"
"      <arg type=\"o\" name=\"objpath\"/>\n"
"    </signal>\n"
"    <signal name=\"LidClosed\"/>\n"
"    <signal name=\"LidOpened\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"OnBattery\"/>\n"
"    <property access=\"read\" type=\"t\" name=\"BatteryTimeToEmpty\"/>\n"
"    <property access=\"read\" type=\"t\" name=\"BatteryTimeToFull\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"PowerSavingModeEnabled\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"HasLidSwitch\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"HasBattery\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"BatteryPercentage\"/>\n"
"    <property access=\"read\" type=\"u\" name=\"BatteryStatus\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"PowerSavingModeAuto\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"PowerSystemAutoToSleepWhenFree\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"PowerSavingModeAutoWhenBatteryLow\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"PowerSavingModeBrightnessDropPercent\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"IsHighPerformanceSupported\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Mode\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CpuBoost\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"IsBalancePerformanceSupported\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"IsBalanceSupported\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"IsPowerSaveSupported\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"BatteryCapacity\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"CpuGovernor\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"PowerSavingModeBrightnessData\"/>\n"
"    <property access=\"read\" type=\"u\" name=\"PowerSavingModeAutoBatteryPercent\"/>\n"
"  </interface>\n"
        "")
public:
    Power1Adaptor(QObject *parent);
    virtual ~Power1Adaptor();

public: // PROPERTIES
    Q_PROPERTY(double BatteryCapacity READ batteryCapacity)
    double batteryCapacity() const;

    Q_PROPERTY(double BatteryPercentage READ batteryPercentage)
    double batteryPercentage() const;

    Q_PROPERTY(uint BatteryStatus READ batteryStatus)
    uint batteryStatus() const;

    Q_PROPERTY(qulonglong BatteryTimeToEmpty READ batteryTimeToEmpty)
    qulonglong batteryTimeToEmpty() const;

    Q_PROPERTY(qulonglong BatteryTimeToFull READ batteryTimeToFull)
    qulonglong batteryTimeToFull() const;

    Q_PROPERTY(bool CpuBoost READ cpuBoost)
    bool cpuBoost() const;

    Q_PROPERTY(QString CpuGovernor READ cpuGovernor)
    QString cpuGovernor() const;

    Q_PROPERTY(bool HasBattery READ hasBattery)
    bool hasBattery() const;

    Q_PROPERTY(bool HasLidSwitch READ hasLidSwitch)
    bool hasLidSwitch() const;

    Q_PROPERTY(bool IsBalancePerformanceSupported READ isBalancePerformanceSupported)
    bool isBalancePerformanceSupported() const;

    Q_PROPERTY(bool IsBalanceSupported READ isBalanceSupported)
    bool isBalanceSupported() const;

    Q_PROPERTY(bool IsHighPerformanceSupported READ isHighPerformanceSupported)
    bool isHighPerformanceSupported() const;

    Q_PROPERTY(bool IsPowerSaveSupported READ isPowerSaveSupported)
    bool isPowerSaveSupported() const;

    Q_PROPERTY(QString Mode READ mode)
    QString mode() const;

    Q_PROPERTY(bool OnBattery READ onBattery)
    bool onBattery() const;

    Q_PROPERTY(bool PowerSavingModeAuto READ powerSavingModeAuto WRITE setPowerSavingModeAuto)
    bool powerSavingModeAuto() const;
    void setPowerSavingModeAuto(bool value);

    Q_PROPERTY(uint PowerSavingModeAutoBatteryPercent READ powerSavingModeAutoBatteryPercent)
    uint powerSavingModeAutoBatteryPercent() const;

    Q_PROPERTY(bool PowerSavingModeAutoWhenBatteryLow READ powerSavingModeAutoWhenBatteryLow WRITE setPowerSavingModeAutoWhenBatteryLow)
    bool powerSavingModeAutoWhenBatteryLow() const;
    void setPowerSavingModeAutoWhenBatteryLow(bool value);

    Q_PROPERTY(QString PowerSavingModeBrightnessData READ powerSavingModeBrightnessData)
    QString powerSavingModeBrightnessData() const;

    Q_PROPERTY(uint PowerSavingModeBrightnessDropPercent READ powerSavingModeBrightnessDropPercent WRITE setPowerSavingModeBrightnessDropPercent)
    uint powerSavingModeBrightnessDropPercent() const;
    void setPowerSavingModeBrightnessDropPercent(uint value);

    Q_PROPERTY(bool PowerSavingModeEnabled READ powerSavingModeEnabled WRITE setPowerSavingModeEnabled)
    bool powerSavingModeEnabled() const;
    void setPowerSavingModeEnabled(bool value);

    Q_PROPERTY(bool PowerSystemAutoToSleepWhenFree READ powerSystemAutoToSleepWhenFree WRITE setPowerSystemAutoToSleepWhenFree)
    bool powerSystemAutoToSleepWhenFree() const;
    void setPowerSystemAutoToSleepWhenFree(bool value);

public Q_SLOTS: // METHODS
    QList<QDBusObjectPath> GetBatteries();
    void Refresh();
    void RefreshBatteries();
    void RefreshMains();
    void SetMode(const QString &mode);
Q_SIGNALS: // SIGNALS
    void BatteryAdded(const QDBusObjectPath &objpath);
    void BatteryDisplayUpdate(qlonglong timestamp);
    void BatteryRemoved(const QDBusObjectPath &objpath);
    void LidClosed();
    void LidOpened();
};

#endif
