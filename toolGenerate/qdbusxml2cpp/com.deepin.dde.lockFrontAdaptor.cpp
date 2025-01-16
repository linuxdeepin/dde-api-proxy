/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.dde.lockFront.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.lockFrontAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.lockFront.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.lockFrontAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class LockFrontAdaptor
 */

LockFrontAdaptor::LockFrontAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

LockFrontAdaptor::~LockFrontAdaptor()
{
    // destructor
}

bool LockFrontAdaptor::visible() const
{
    // get the value of property Visible
    return qvariant_cast< bool >(parent()->property("Visible"));
}

void LockFrontAdaptor::Hibernate(bool enable)
{
    // handle method call com.deepin.dde.lockFront.Hibernate
    QMetaObject::invokeMethod(parent(), "Hibernate", Q_ARG(bool, enable));
}

void LockFrontAdaptor::Show()
{
    // handle method call com.deepin.dde.lockFront.Show
    QMetaObject::invokeMethod(parent(), "Show");
}

void LockFrontAdaptor::ShowAuth(bool active)
{
    // handle method call com.deepin.dde.lockFront.ShowAuth
    QMetaObject::invokeMethod(parent(), "ShowAuth", Q_ARG(bool, active));
}

void LockFrontAdaptor::ShowUserList()
{
    // handle method call com.deepin.dde.lockFront.ShowUserList
    QMetaObject::invokeMethod(parent(), "ShowUserList");
}

void LockFrontAdaptor::Suspend(bool enable)
{
    // handle method call com.deepin.dde.lockFront.Suspend
    QMetaObject::invokeMethod(parent(), "Suspend", Q_ARG(bool, enable));
}
