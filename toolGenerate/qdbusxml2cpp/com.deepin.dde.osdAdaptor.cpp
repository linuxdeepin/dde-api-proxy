/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.dde.osd.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.osdAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.osd.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.osdAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class OsdAdaptor
 */

OsdAdaptor::OsdAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

OsdAdaptor::~OsdAdaptor()
{
    // destructor
}

void OsdAdaptor::ShowOSD(const QString &osd)
{
    // handle method call com.deepin.dde.osd.ShowOSD
    QMetaObject::invokeMethod(parent(), "ShowOSD", Q_ARG(QString, osd));
}

