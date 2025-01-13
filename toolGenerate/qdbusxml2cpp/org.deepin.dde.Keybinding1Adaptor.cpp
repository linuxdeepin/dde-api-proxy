/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.Keybinding1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Keybinding1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Keybinding1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Keybinding1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class Keybinding1Adaptor
 */

Keybinding1Adaptor::Keybinding1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

Keybinding1Adaptor::~Keybinding1Adaptor()
{
    // destructor
}

int Keybinding1Adaptor::numLockState() const
{
    // get the value of property NumLockState
    return qvariant_cast< int >(parent()->property("NumLockState"));
}

uint Keybinding1Adaptor::shortcutSwitchLayout() const
{
    // get the value of property ShortcutSwitchLayout
    return qvariant_cast< uint >(parent()->property("ShortcutSwitchLayout"));
}

void Keybinding1Adaptor::setShortcutSwitchLayout(uint value)
{
    // set the value of property ShortcutSwitchLayout
    parent()->setProperty("ShortcutSwitchLayout", QVariant::fromValue(value));
}

QString Keybinding1Adaptor::Add(const QString &in0, const QString &in1, const QString &in2, bool &out1)
{
    // handle method call org.deepin.dde.Keybinding1.Add
    //return static_cast<YourObjectType *>(parent())->Add(in0, in1, in2, out1);
}

void Keybinding1Adaptor::AddCustomShortcut(const QString &in0, const QString &in1, const QString &in2)
{
    // handle method call org.deepin.dde.Keybinding1.AddCustomShortcut
    QMetaObject::invokeMethod(parent(), "AddCustomShortcut", Q_ARG(QString, in0), Q_ARG(QString, in1), Q_ARG(QString, in2));
}

void Keybinding1Adaptor::AddShortcutKeystroke(const QString &in0, int in1, const QString &in2)
{
    // handle method call org.deepin.dde.Keybinding1.AddShortcutKeystroke
    QMetaObject::invokeMethod(parent(), "AddShortcutKeystroke", Q_ARG(QString, in0), Q_ARG(int, in1), Q_ARG(QString, in2));
}

bool Keybinding1Adaptor::CheckAvaliable(const QString &in0, QString &out1)
{
    // handle method call org.deepin.dde.Keybinding1.CheckAvaliable
    //return static_cast<YourObjectType *>(parent())->CheckAvaliable(in0, out1);
}

void Keybinding1Adaptor::ClearShortcutKeystrokes(const QString &in0, int in1)
{
    // handle method call org.deepin.dde.Keybinding1.ClearShortcutKeystrokes
    QMetaObject::invokeMethod(parent(), "ClearShortcutKeystrokes", Q_ARG(QString, in0), Q_ARG(int, in1));
}

void Keybinding1Adaptor::Delete(const QString &in0, int in1)
{
    // handle method call org.deepin.dde.Keybinding1.Delete
    QMetaObject::invokeMethod(parent(), "Delete", Q_ARG(QString, in0), Q_ARG(int, in1));
}

void Keybinding1Adaptor::DeleteCustomShortcut(const QString &in0)
{
    // handle method call org.deepin.dde.Keybinding1.DeleteCustomShortcut
    QMetaObject::invokeMethod(parent(), "DeleteCustomShortcut", Q_ARG(QString, in0));
}

void Keybinding1Adaptor::DeleteShortcutKeystroke(const QString &in0, int in1, const QString &in2)
{
    // handle method call org.deepin.dde.Keybinding1.DeleteShortcutKeystroke
    QMetaObject::invokeMethod(parent(), "DeleteShortcutKeystroke", Q_ARG(QString, in0), Q_ARG(int, in1), Q_ARG(QString, in2));
}

void Keybinding1Adaptor::Disable(const QString &in0, int in1)
{
    // handle method call org.deepin.dde.Keybinding1.Disable
    QMetaObject::invokeMethod(parent(), "Disable", Q_ARG(QString, in0), Q_ARG(int, in1));
}

QString Keybinding1Adaptor::GetShortcut(const QString &in0, int in1)
{
    // handle method call org.deepin.dde.Keybinding1.GetShortcut
    QString out0;
    QMetaObject::invokeMethod(parent(), "GetShortcut", Q_RETURN_ARG(QString, out0), Q_ARG(QString, in0), Q_ARG(int, in1));
    return out0;
}

void Keybinding1Adaptor::GrabScreen()
{
    // handle method call org.deepin.dde.Keybinding1.GrabScreen
    QMetaObject::invokeMethod(parent(), "GrabScreen");
}

QString Keybinding1Adaptor::List()
{
    // handle method call org.deepin.dde.Keybinding1.List
    QString out0;
    QMetaObject::invokeMethod(parent(), "List", Q_RETURN_ARG(QString, out0));
    return out0;
}

QString Keybinding1Adaptor::ListAllShortcuts()
{
    // handle method call org.deepin.dde.Keybinding1.ListAllShortcuts
    QString out0;
    QMetaObject::invokeMethod(parent(), "ListAllShortcuts", Q_RETURN_ARG(QString, out0));
    return out0;
}

QString Keybinding1Adaptor::ListShortcutsByType(int in0)
{
    // handle method call org.deepin.dde.Keybinding1.ListShortcutsByType
    QString out0;
    QMetaObject::invokeMethod(parent(), "ListShortcutsByType", Q_RETURN_ARG(QString, out0), Q_ARG(int, in0));
    return out0;
}

QString Keybinding1Adaptor::LookupConflictingShortcut(const QString &in0)
{
    // handle method call org.deepin.dde.Keybinding1.LookupConflictingShortcut
    QString out0;
    QMetaObject::invokeMethod(parent(), "LookupConflictingShortcut", Q_RETURN_ARG(QString, out0), Q_ARG(QString, in0));
    return out0;
}

bool Keybinding1Adaptor::ModifiedAccel(const QString &in0, int in1, const QString &in2, bool in3, QString &out1)
{
    // handle method call org.deepin.dde.Keybinding1.ModifiedAccel
    //return static_cast<YourObjectType *>(parent())->ModifiedAccel(in0, in1, in2, in3, out1);
}

void Keybinding1Adaptor::ModifyCustomShortcut(const QString &in0, const QString &in1, const QString &in2, const QString &in3)
{
    // handle method call org.deepin.dde.Keybinding1.ModifyCustomShortcut
    QMetaObject::invokeMethod(parent(), "ModifyCustomShortcut", Q_ARG(QString, in0), Q_ARG(QString, in1), Q_ARG(QString, in2), Q_ARG(QString, in3));
}

QString Keybinding1Adaptor::Query(const QString &in0, int in1)
{
    // handle method call org.deepin.dde.Keybinding1.Query
    QString out0;
    QMetaObject::invokeMethod(parent(), "Query", Q_RETURN_ARG(QString, out0), Q_ARG(QString, in0), Q_ARG(int, in1));
    return out0;
}

void Keybinding1Adaptor::Reset()
{
    // handle method call org.deepin.dde.Keybinding1.Reset
    QMetaObject::invokeMethod(parent(), "Reset");
}

QString Keybinding1Adaptor::SearchShortcuts(const QString &in0)
{
    // handle method call org.deepin.dde.Keybinding1.SearchShortcuts
    QString out0;
    QMetaObject::invokeMethod(parent(), "SearchShortcuts", Q_RETURN_ARG(QString, out0), Q_ARG(QString, in0));
    return out0;
}

void Keybinding1Adaptor::SelectKeystroke()
{
    // handle method call org.deepin.dde.Keybinding1.SelectKeystroke
    QMetaObject::invokeMethod(parent(), "SelectKeystroke");
}

void Keybinding1Adaptor::SetNumLockState(int in0)
{
    // handle method call org.deepin.dde.Keybinding1.SetNumLockState
    QMetaObject::invokeMethod(parent(), "SetNumLockState", Q_ARG(int, in0));
}

