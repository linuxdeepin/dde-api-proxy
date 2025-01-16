/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.daemon.Launcher1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Launcher1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Launcher1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_DAEMON_LAUNCHER1ADAPTOR_H
#define ORG_DEEPIN_DDE_DAEMON_LAUNCHER1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.daemon.Launcher1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.daemon.Launcher1
 */
class Launcher1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.daemon.Launcher1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.daemon.Launcher1\">\n"
"    <method name=\"GetAllItemInfos\">\n"
"      <arg direction=\"out\" type=\"a(ssssxx)\" name=\"itemInfoList\"/>\n"
"      <annotation value=\"LauncherItemInfoList\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"GetAllNewInstalledApps\">\n"
"      <arg direction=\"out\" type=\"as\" name=\"apps\"/>\n"
"    </method>\n"
"    <method name=\"GetDisableScaling\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"id\"/>\n"
"      <arg direction=\"out\" type=\"b\" name=\"value\"/>\n"
"    </method>\n"
"    <method name=\"GetItemInfo\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"id\"/>\n"
"      <arg direction=\"out\" type=\"(ssssxx)\" name=\"itemInfo\"/>\n"
"      <annotation value=\"LauncherItemInfo\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"GetUseProxy\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"id\"/>\n"
"      <arg direction=\"out\" type=\"b\" name=\"value\"/>\n"
"    </method>\n"
"    <method name=\"IsItemOnDesktop\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"id\"/>\n"
"      <arg direction=\"out\" type=\"b\" name=\"result\"/>\n"
"    </method>\n"
"    <method name=\"MarkLaunched\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"id\"/>\n"
"    </method>\n"
"    <method name=\"RequestRemoveFromDesktop\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"id\"/>\n"
"      <arg direction=\"out\" type=\"b\" name=\"ok\"/>\n"
"    </method>\n"
"    <method name=\"RequestSendToDesktop\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"id\"/>\n"
"      <arg direction=\"out\" type=\"b\" name=\"ok\"/>\n"
"    </method>\n"
"    <method name=\"RequestUninstall\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"id\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"purge\"/>\n"
"    </method>\n"
"    <method name=\"Search\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"key\"/>\n"
"    </method>\n"
"    <method name=\"SetDisableScaling\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"id\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"value\"/>\n"
"    </method>\n"
"    <method name=\"SetUseProxy\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"id\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"value\"/>\n"
"    </method>\n"
"    <signal name=\"SearchDone\">\n"
"      <arg type=\"as\" name=\"apps\"/>\n"
"    </signal>\n"
"    <signal name=\"ItemChanged\">\n"
"      <arg type=\"s\" name=\"status\"/>\n"
"      <arg type=\"(ssssxx)\" name=\"itemInfo\"/>\n"
"      <annotation value=\"LauncherItemInfo\" name=\"org.qtproject.QtDBus.QtTypeName.In1\"/>\n"
"      <arg direction=\"out\" type=\"x\" name=\"categoryID\"/>\n"
"    </signal>\n"
"    <signal name=\"NewAppLaunched\">\n"
"      <arg type=\"s\" name=\"appID\"/>\n"
"    </signal>\n"
"    <signal name=\"UninstallSuccess\">\n"
"      <arg type=\"s\" name=\"appID\"/>\n"
"    </signal>\n"
"    <signal name=\"UninstallFailed\">\n"
"      <arg type=\"s\" name=\"appId\"/>\n"
"      <arg type=\"s\" name=\"errMsg\"/>\n"
"    </signal>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"Fullscreen\"/>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"DisplayMode\"/>\n"
"  </interface>\n"
        "")
public:
    Launcher1Adaptor(QObject *parent);
    virtual ~Launcher1Adaptor();

public: // PROPERTIES
    Q_PROPERTY(int DisplayMode READ displayMode WRITE setDisplayMode)
    int displayMode() const;
    void setDisplayMode(int value);

    Q_PROPERTY(bool Fullscreen READ fullscreen WRITE setFullscreen)
    bool fullscreen() const;
    void setFullscreen(bool value);

public Q_SLOTS: // METHODS
    LauncherItemInfoList GetAllItemInfos();
    QStringList GetAllNewInstalledApps();
    bool GetDisableScaling(const QString &id);
    LauncherItemInfo GetItemInfo(const QString &id);
    bool GetUseProxy(const QString &id);
    bool IsItemOnDesktop(const QString &id);
    void MarkLaunched(const QString &id);
    bool RequestRemoveFromDesktop(const QString &id);
    bool RequestSendToDesktop(const QString &id);
    void RequestUninstall(const QString &id, bool purge);
    void Search(const QString &key);
    void SetDisableScaling(const QString &id, bool value);
    void SetUseProxy(const QString &id, bool value);
Q_SIGNALS: // SIGNALS
    void ItemChanged(const QString &status, LauncherItemInfo itemInfo, qlonglong categoryID);
    void NewAppLaunched(const QString &appID);
    void SearchDone(const QStringList &apps);
    void UninstallFailed(const QString &appId, const QString &errMsg);
    void UninstallSuccess(const QString &appID);
};

#endif