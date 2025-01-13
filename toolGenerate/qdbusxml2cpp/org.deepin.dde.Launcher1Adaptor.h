/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.Launcher1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Launcher1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Launcher1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_LAUNCHER1ADAPTOR_H
#define ORG_DEEPIN_DDE_LAUNCHER1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Launcher1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.Launcher1
 */
class Launcher1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.Launcher1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.Launcher1\">\n"
"    <property access=\"read\" type=\"b\" name=\"Visible\"/>\n"
"    <signal name=\"Closed\"/>\n"
"    <signal name=\"Shown\"/>\n"
"    <signal name=\"VisibleChanged\">\n"
"      <arg direction=\"out\" type=\"b\" name=\"visible\"/>\n"
"    </signal>\n"
"    <method name=\"Exit\"/>\n"
"    <method name=\"Hide\"/>\n"
"    <method name=\"Show\"/>\n"
"    <method name=\"ShowByMode\">\n"
"      <arg direction=\"in\" type=\"x\" name=\"in0\"/>\n"
"    </method>\n"
"    <method name=\"UninstallApp\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"appKey\"/>\n"
"    </method>\n"
"    <method name=\"Toggle\"/>\n"
"    <method name=\"IsVisible\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    Launcher1Adaptor(QObject *parent);
    virtual ~Launcher1Adaptor();

public: // PROPERTIES
    Q_PROPERTY(bool Visible READ visible)
    bool visible() const;

public Q_SLOTS: // METHODS
    void Exit();
    void Hide();
    bool IsVisible();
    void Show();
    void ShowByMode(qlonglong in0);
    void Toggle();
    void UninstallApp(const QString &appKey);
Q_SIGNALS: // SIGNALS
    void Closed();
    void Shown();
    void VisibleChanged(bool visible);
};

#endif
