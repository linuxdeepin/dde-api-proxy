/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.Dock1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Dock1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Dock1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Dock1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class Dock1Adaptor
 */

Dock1Adaptor::Dock1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

Dock1Adaptor::~Dock1Adaptor()
{
    // destructor
}

DockGeometry Dock1Adaptor::geometry() const
{
    // get the value of property geometry
    return qvariant_cast< DockGeometry >(parent()->property("geometry"));
}

bool Dock1Adaptor::showInPrimary() const
{
    // get the value of property showInPrimary
    return qvariant_cast< bool >(parent()->property("showInPrimary"));
}

void Dock1Adaptor::setShowInPrimary(bool value)
{
    // set the value of property showInPrimary
    parent()->setProperty("showInPrimary", QVariant::fromValue(value));
}

QStringList Dock1Adaptor::GetLoadedPlugins()
{
    // handle method call org.deepin.dde.Dock1.GetLoadedPlugins
    QStringList list;
    QMetaObject::invokeMethod(parent(), "GetLoadedPlugins", Q_RETURN_ARG(QStringList, list));
    return list;
}

void Dock1Adaptor::ReloadPlugins()
{
    // handle method call org.deepin.dde.Dock1.ReloadPlugins
    QMetaObject::invokeMethod(parent(), "ReloadPlugins");
}

void Dock1Adaptor::callShow()
{
    // handle method call org.deepin.dde.Dock1.callShow
    QMetaObject::invokeMethod(parent(), "callShow");
}

QString Dock1Adaptor::getPluginKey(const QString &pluginName)
{
    // handle method call org.deepin.dde.Dock1.getPluginKey
    QString key;
    QMetaObject::invokeMethod(parent(), "getPluginKey", Q_RETURN_ARG(QString, key), Q_ARG(QString, pluginName));
    return key;
}

bool Dock1Adaptor::getPluginVisible(const QString &pluginName)
{
    // handle method call org.deepin.dde.Dock1.getPluginVisible
    bool visible;
    QMetaObject::invokeMethod(parent(), "getPluginVisible", Q_RETURN_ARG(bool, visible), Q_ARG(QString, pluginName));
    return visible;
}

void Dock1Adaptor::resizeDock(int offset, bool dragging)
{
    // handle method call org.deepin.dde.Dock1.resizeDock
    QMetaObject::invokeMethod(parent(), "resizeDock", Q_ARG(int, offset), Q_ARG(bool, dragging));
}

void Dock1Adaptor::setPluginVisible(const QString &pluginName, bool visible)
{
    // handle method call org.deepin.dde.Dock1.setPluginVisible
    QMetaObject::invokeMethod(parent(), "setPluginVisible", Q_ARG(QString, pluginName), Q_ARG(bool, visible));
}
