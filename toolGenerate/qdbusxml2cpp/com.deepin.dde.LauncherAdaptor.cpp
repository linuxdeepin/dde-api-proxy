/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.dde.Launcher.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.LauncherAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.Launcher.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.LauncherAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class LauncherAdaptor
 */

LauncherAdaptor::LauncherAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

LauncherAdaptor::~LauncherAdaptor()
{
    // destructor
}

bool LauncherAdaptor::visible() const
{
    // get the value of property Visible
    return qvariant_cast< bool >(parent()->property("Visible"));
}

void LauncherAdaptor::Exit()
{
    // handle method call com.deepin.dde.Launcher.Exit
    QMetaObject::invokeMethod(parent(), "Exit");
}

void LauncherAdaptor::Hide()
{
    // handle method call com.deepin.dde.Launcher.Hide
    QMetaObject::invokeMethod(parent(), "Hide");
}

bool LauncherAdaptor::IsVisible()
{
    // handle method call com.deepin.dde.Launcher.IsVisible
    bool out0;
    QMetaObject::invokeMethod(parent(), "IsVisible", Q_RETURN_ARG(bool, out0));
    return out0;
}

void LauncherAdaptor::Show()
{
    // handle method call com.deepin.dde.Launcher.Show
    QMetaObject::invokeMethod(parent(), "Show");
}

void LauncherAdaptor::ShowByMode(qlonglong in0)
{
    // handle method call com.deepin.dde.Launcher.ShowByMode
    QMetaObject::invokeMethod(parent(), "ShowByMode", Q_ARG(qlonglong, in0));
}

void LauncherAdaptor::Toggle()
{
    // handle method call com.deepin.dde.Launcher.Toggle
    QMetaObject::invokeMethod(parent(), "Toggle");
}

void LauncherAdaptor::UninstallApp(const QString &appKey)
{
    // handle method call com.deepin.dde.Launcher.UninstallApp
    QMetaObject::invokeMethod(parent(), "UninstallApp", Q_ARG(QString, appKey));
}

