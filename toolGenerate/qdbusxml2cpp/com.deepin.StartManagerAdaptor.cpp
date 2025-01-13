/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.StartManager.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.StartManagerAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.StartManager.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.StartManagerAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class StartManagerAdaptor
 */

StartManagerAdaptor::StartManagerAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

StartManagerAdaptor::~StartManagerAdaptor()
{
    // destructor
}

qulonglong StartManagerAdaptor::neededMemory() const
{
    // get the value of property NeededMemory
    return qvariant_cast< qulonglong >(parent()->property("NeededMemory"));
}

bool StartManagerAdaptor::AddAutostart(const QString &in0)
{
    // handle method call com.deepin.StartManager.AddAutostart
    bool out0;
    QMetaObject::invokeMethod(parent(), "AddAutostart", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

QStringList StartManagerAdaptor::AutostartList()
{
    // handle method call com.deepin.StartManager.AutostartList
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "AutostartList", Q_RETURN_ARG(QStringList, out0));
    return out0;
}

AppsCGroupInfo StartManagerAdaptor::GetApps()
{
    // handle method call com.deepin.StartManager.GetApps
    AppsCGroupInfo out0;
    QMetaObject::invokeMethod(parent(), "GetApps", Q_RETURN_ARG(AppsCGroupInfo, out0));
    return out0;
}

bool StartManagerAdaptor::IsAutostart(const QString &in0)
{
    // handle method call com.deepin.StartManager.IsAutostart
    bool out0;
    QMetaObject::invokeMethod(parent(), "IsAutostart", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

bool StartManagerAdaptor::IsMemSufficient()
{
    // handle method call com.deepin.StartManager.IsMemSufficient
    bool out0;
    QMetaObject::invokeMethod(parent(), "IsMemSufficient", Q_RETURN_ARG(bool, out0));
    return out0;
}

bool StartManagerAdaptor::Launch(const QString &in0)
{
    // handle method call com.deepin.StartManager.Launch
    bool out0;
    QMetaObject::invokeMethod(parent(), "Launch", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

void StartManagerAdaptor::LaunchApp(const QString &in0, uint in1, const QStringList &in2)
{
    // handle method call com.deepin.StartManager.LaunchApp
    QMetaObject::invokeMethod(parent(), "LaunchApp", Q_ARG(QString, in0), Q_ARG(uint, in1), Q_ARG(QStringList, in2));
}

void StartManagerAdaptor::LaunchAppAction(const QString &in0, const QString &in1, uint in2)
{
    // handle method call com.deepin.StartManager.LaunchAppAction
    QMetaObject::invokeMethod(parent(), "LaunchAppAction", Q_ARG(QString, in0), Q_ARG(QString, in1), Q_ARG(uint, in2));
}

bool StartManagerAdaptor::LaunchWithTimestamp(const QString &in0, uint in1)
{
    // handle method call com.deepin.StartManager.LaunchWithTimestamp
    bool out0;
    QMetaObject::invokeMethod(parent(), "LaunchWithTimestamp", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0), Q_ARG(uint, in1));
    return out0;
}

bool StartManagerAdaptor::RemoveAutostart(const QString &in0)
{
    // handle method call com.deepin.StartManager.RemoveAutostart
    bool out0;
    QMetaObject::invokeMethod(parent(), "RemoveAutostart", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

void StartManagerAdaptor::RunCommand(const QString &in0, const QStringList &in1)
{
    // handle method call com.deepin.StartManager.RunCommand
    QMetaObject::invokeMethod(parent(), "RunCommand", Q_ARG(QString, in0), Q_ARG(QStringList, in1));
}

void StartManagerAdaptor::TryAgain(bool in0)
{
    // handle method call com.deepin.StartManager.TryAgain
    QMetaObject::invokeMethod(parent(), "TryAgain", Q_ARG(bool, in0));
}

