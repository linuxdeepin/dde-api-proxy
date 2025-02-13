/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.InputDevices1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.InputDevices1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.InputDevices1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.InputDevices1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class InputDevices1Adaptor
 */

InputDevices1Adaptor::InputDevices1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

InputDevices1Adaptor::~InputDevices1Adaptor()
{
    // destructor
}

InputDeviceList InputDevices1Adaptor::infos() const
{
    // get the value of property Infos
    return qvariant_cast< InputDeviceList >(parent()->property("Infos"));
}

uint InputDevices1Adaptor::wheelSpeed() const
{
    // get the value of property WheelSpeed
    return qvariant_cast< uint >(parent()->property("WheelSpeed"));
}

void InputDevices1Adaptor::setWheelSpeed(uint value)
{
    // set the value of property WheelSpeed
    parent()->setProperty("WheelSpeed", QVariant::fromValue(value));
}

