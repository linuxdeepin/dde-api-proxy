// SPDX-FileCopyrightText: 2018 - 2022 UnionTech Software Technology Co., Ltd.
// 
// SPDX-License-Identifier: GPL-3.0-or-later
#include <QCoreApplication>
#include <QCommandLineParser>
#include <QDebug>
#include <QStringList>

// dde-appearance
#include "session/org_deepin_dde_Appearance1.hpp"
// dde-daemon
#include "session/org_deepin_dde_Audio1.hpp"
#include "session/org_deepin_dde_Bluetooth1.hpp"
#include "session/org_deepin_dde_InputDevices1.hpp"
#include "session/org_deepin_dde_InputDevice1_Wacom.hpp"
#include "session/org_deepin_dde_InputDevice1_TouchPad.hpp"
#include "session/org_deepin_dde_Keybinding1.hpp"
#include "session/org_deepin_dde_LangSelector1.hpp"
#include "session/org_deepin_dde_Network1.hpp"
#include "session/org_deepin_dde_Power1.hpp"
#include "session/org_deepin_dde_SoundEffect1.hpp"
#include "session/org_deepin_dde_SystemInfo1.hpp"
#include "session/org_deepin_dde_Timedate1.hpp"
#include "session/org_deepin_dde_TrayManager1.hpp"
#include "session/org_deepin_dde_XEventMonitor1.hpp"
// startdde
#include "session/org_deepin_dde_Display1.hpp"
// dde-session
#include "session/org_deepin_dde_SessionManager1.hpp"
#include "session/org_deepin_dde_WMSwitcher1.hpp"
// dde-permission-manager
#include "session/org_deepin_dde_Permission1.hpp"
// dde-application-manager
#include "session/org_deepin_dde_daemon_Dock1.hpp"
#include "session/org_deepin_dde_daemon_Launcher1.hpp"
#include "session/org_deepin_dde_StartManager1.hpp"
#include "session/org_desktopspec_MimeManager1.hpp"
// dde-control-center
#include "session/org_deepin_dde_ControlCenter1.hpp"
// dde-dock
#include "session/org_deepin_dde_Dock1.hpp"
// dde-launcher
#include "session/org_deepin_dde_Launcher1.hpp"
// dde-lock
#include "session/org_deepin_dde_LockFront1.hpp"
#include "session/org_deepin_dde_ShutdownFront1.hpp"
// dde-osd
#include "session/org_deepin_dde_Notification1.hpp"
#include "session/org_deepin_dde_Osd1.hpp"

#include "deepinruntime.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    if (!DeepinRuntime::CheckStartddeSession()) {
        qWarning() << "check startdde session error.";
        return 0;
    }
    QCommandLineParser parser;
    parser.setApplicationDescription("dde-api-proxy-session");
    parser.addHelpOption();
    QCommandLineOption allOption(QStringList() << "a" << "all", "all session proxy.");
    QCommandLineOption backendOption(QStringList() << "B" << "backend", "backend session proxy.");
    QCommandLineOption ddeDaemonOption(QStringList() << "d" << "ddedaemon", "dde-daemon session proxy.");
    QCommandLineOption appearanceOption(QStringList() << "r" << "appearance", "dde-appearance session proxy.");
    QCommandLineOption startddeOption(QStringList() << "s" << "startdde", "startdde session proxy.");
    QCommandLineOption ddesessionOption(QStringList() << "S" << "ddesession", "dde-session session proxy.");
    QCommandLineOption pmOption(QStringList() << "P" << "pm", "dde-permission-manager session proxy.");
    QCommandLineOption amOption(QStringList() << "M" << "am", "dde-application--manager session proxy.");
    QCommandLineOption dccOption(QStringList() << "c" << "dcc", "dde-control-center session proxy.");
    QCommandLineOption dockOption(QStringList() << "D" << "dock", "dde-dock session proxy.");
    QCommandLineOption launcherOption(QStringList() << "l" << "launcher", "dde-launcher session proxy.");
    QCommandLineOption ddelockOption(QStringList() << "L" << "ddelock", "dde-lock session proxy.");
    QCommandLineOption ddeosdOption(QStringList() << "o" << "ddeosd", "dde-osd session proxy.");
    parser.addOption(allOption);
    parser.addOption(backendOption);
    parser.addOption(ddeDaemonOption);
    parser.addOption(appearanceOption);
    parser.addOption(startddeOption);
    parser.addOption(ddesessionOption);
    parser.addOption(pmOption);
    parser.addOption(amOption);
    parser.addOption(dccOption);
    parser.addOption(dockOption);
    parser.addOption(launcherOption);
    parser.addOption(ddelockOption);
    parser.addOption(ddeosdOption);
    parser.process(a);

    QStringList serviceMoudle;
    if(parser.isSet(allOption)) {
        serviceMoudle << "dde-daemon" << "dde-appearance" << "startdde" << "dde-session" << "dde-permission-manager"
            << "dde-application-manager" << "dde-control-center" << "dde-dock" << "dde-launcher" << "dde-lock" << "dde-osd";
    }
    if(parser.isSet(backendOption)) {
        serviceMoudle << "dde-daemon" << "dde-appearance" << "startdde" << "dde-session" << "dde-permission-manager" << "dde-application-manager";
    }
    if (parser.isSet(ddeDaemonOption)) {
        serviceMoudle << "dde-daemon";
    }
    if (parser.isSet(appearanceOption)) {
        serviceMoudle << "dde-appearance";
    }
    if (parser.isSet(startddeOption)) {
        serviceMoudle << "startdde";
    }
    if (parser.isSet(ddesessionOption)) {
        serviceMoudle << "dde-session";
    }
    if (parser.isSet(pmOption)) {
        serviceMoudle << "dde-permission-manager";
    }
    if (parser.isSet(amOption)) {
        serviceMoudle << "dde-application-manager";
    }
    if (parser.isSet(dccOption)) {
        serviceMoudle << "dde-control-center";
    }
    if (parser.isSet(dockOption)) {
        serviceMoudle << "dde-dock";
    }
    if (parser.isSet(launcherOption)) {
        serviceMoudle << "dde-launcher";
    }
    if (parser.isSet(ddelockOption)) {
        serviceMoudle << "dde-lock";
    }
    if (parser.isSet(ddeosdOption)) {
        serviceMoudle << "dde-osd";
    }
    serviceMoudle.removeDuplicates();
    qInfo() << "";
    qInfo() << "Will to start proxy modules:" << serviceMoudle;

    if (serviceMoudle.contains("dde-appearance")) {
        qInfo() << "Start the proxy module:" << "dde-appearance";
        // V0 -> V1
        new SessionAppearance1Proxy("org.deepin.dde.Appearance1", "/org/deepin/dde/Appearance1", "org.deepin.dde.Appearance1",
            "com.deepin.daemon.Appearance", "/com/deepin/daemon/Appearance", "com.deepin.daemon.Appearance", QDBusConnection::SessionBus);
        // V0.5 -> V1
        new SessionAppearance1Proxy("org.deepin.dde.Appearance1", "/org/deepin/dde/Appearance1", "org.deepin.dde.Appearance1",
            "org.deepin.daemon.Appearance1", "/org/deepin/daemon/Appearance1", "org.deepin.daemon.Appearance1", QDBusConnection::SessionBus);
    }
    if (serviceMoudle.contains("dde-daemon")) {
        qInfo() << "Start the proxy module:" << "dde-daemon";
        // V0 -> V1
        new SessionAudio1Proxy("org.deepin.dde.Audio1", "/org/deepin/dde/Audio1", "org.deepin.dde.Audio1",
            "com.deepin.daemon.Audio", "/com/deepin/daemon/Audio", "com.deepin.daemon.Audio", QDBusConnection::SessionBus);
        new SessionBluetooth1Proxy("org.deepin.dde.Bluetooth1", "/org/deepin/dde/Bluetooth1", "org.deepin.dde.Bluetooth1",
            "com.deepin.daemon.Bluetooth", "/com/deepin/daemon/Bluetooth", "com.deepin.daemon.Bluetooth", QDBusConnection::SessionBus);
        new SessionInputDevices1Proxy("org.deepin.dde.InputDevices1", "/org/deepin/dde/InputDevices1", "org.deepin.dde.InputDevices1",
            "com.deepin.daemon.InputDevices", "/com/deepin/daemon/InputDevices", "com.deepin.daemon.InputDevices", QDBusConnection::SessionBus);
        new SessionInputDevice1WacomProxy("org.deepin.dde.InputDevices1", "/org/deepin/dde/InputDevice1/Wacom", "org.deepin.dde.InputDevice1.Wacom",
            "com.deepin.daemon.InputDevices", "/com/deepin/daemon/InputDevice/Wacom", "com.deepin.daemon.InputDevice.Wacom", QDBusConnection::SessionBus);
        new SessionInputDevice1TouchPadProxy("org.deepin.dde.InputDevices1", "/org/deepin/dde/InputDevice1/TouchPad", "org.deepin.dde.InputDevice1.TouchPad",
            "com.deepin.daemon.InputDevices", "/com/deepin/daemon/InputDevice/TouchPad", "com.deepin.daemon.InputDevice.TouchPad", QDBusConnection::SessionBus);
        new SessionKeybinding1Proxy("org.deepin.dde.Keybinding1", "/org/deepin/dde/Keybinding1", "org.deepin.dde.Keybinding1",
            "com.deepin.daemon.Keybinding", "/com/deepin/daemon/Keybinding", "com.deepin.daemon.Keybinding", QDBusConnection::SessionBus);
        new SessionLangSelector1Proxy("org.deepin.dde.LangSelector1", "/org/deepin/dde/LangSelector1", "org.deepin.dde.LangSelector1",
            "com.deepin.daemon.LangSelector", "/com/deepin/daemon/LangSelector", "com.deepin.daemon.LangSelector", QDBusConnection::SessionBus);
        new SessionNetwork1Proxy("org.deepin.dde.Network1", "/org/deepin/dde/Network1", "org.deepin.dde.Network1",
            "com.deepin.daemon.Network", "/com/deepin/daemon/Network", "com.deepin.daemon.Network", QDBusConnection::SessionBus);
        new SessionPower1Proxy("org.deepin.dde.Power1", "/org/deepin/dde/Power1", "org.deepin.dde.Power1",
            "com.deepin.daemon.Power", "/com/deepin/daemon/Power", "com.deepin.daemon.Power", QDBusConnection::SessionBus);
        new SessionSoundEffect1Proxy("org.deepin.dde.SoundEffect1", "/org/deepin/dde/SoundEffect1", "org.deepin.dde.SoundEffect1",
            "com.deepin.daemon.SoundEffect", "/com/deepin/daemon/SoundEffect", "com.deepin.daemon.SoundEffect", QDBusConnection::SessionBus);
        new SessionSystemInfo1Proxy("org.deepin.dde.SystemInfo1", "/org/deepin/dde/SystemInfo1", "org.deepin.dde.SystemInfo1",
            "com.deepin.daemon.SystemInfo", "/com/deepin/daemon/SystemInfo", "com.deepin.daemon.SystemInfo", QDBusConnection::SessionBus);
        new SessionTimedate1Proxy("org.deepin.dde.Timedate1", "/org/deepin/dde/Timedate1", "org.deepin.dde.Timedate1",
            "com.deepin.daemon.Timedate", "/com/deepin/daemon/Timedate", "com.deepin.daemon.Timedate", QDBusConnection::SessionBus);
        new SessionTrayManager1Proxy("org.deepin.dde.TrayManager1", "/org/deepin/dde/TrayManager1", "org.deepin.dde.TrayManager1",
            "com.deepin.dde.TrayManager", "/com/deepin/dde/TrayManager", "com.deepin.dde.TrayManager", QDBusConnection::SessionBus);
        new SessionXEventMonitor1Proxy("org.deepin.dde.XEventMonitor1", "/org/deepin/dde/XEventMonitor1", "org.deepin.dde.XEventMonitor1",
            "com.deepin.api.XEventMonitor", "/com/deepin/api/XEventMonitor", "com.deepin.api.XEventMonitor", QDBusConnection::SessionBus);
        // V0.5 -> V1
        new SessionAudio1Proxy("org.deepin.dde.Audio1", "/org/deepin/dde/Audio1", "org.deepin.dde.Audio1",
            "org.deepin.daemon.Audio1", "/org/deepin/daemon/Audio1", "org.deepin.daemon.Audio1", QDBusConnection::SessionBus);
        new SessionBluetooth1Proxy("org.deepin.dde.Bluetooth1", "/org/deepin/dde/Bluetooth1", "org.deepin.dde.Bluetooth1",
            "org.deepin.daemon.Bluetooth1", "/org/deepin/daemon/Bluetooth1", "org.deepin.daemon.Bluetooth1", QDBusConnection::SessionBus);
        new SessionLangSelector1Proxy("org.deepin.dde.LangSelector1", "/org/deepin/dde/LangSelector1", "org.deepin.dde.LangSelector1",
            "org.deepin.daemon.LangSelector1", "/org/deepin/daemon/LangSelector1", "org.deepin.daemon.LangSelector1", QDBusConnection::SessionBus);
        new SessionPower1Proxy("org.deepin.dde.Power1", "/org/deepin/dde/Power1", "org.deepin.dde.Power1",
            "org.deepin.daemon.Power1", "/org/deepin/daemon/Power1", "org.deepin.daemon.Power1", QDBusConnection::SessionBus);
        new SessionSoundEffect1Proxy("org.deepin.dde.SoundEffect1", "/org/deepin/dde/SoundEffect1", "org.deepin.dde.SoundEffect1",
            "org.deepin.daemon.SoundEffect1", "/org/deepin/daemon/SoundEffect1", "org.deepin.daemon.SoundEffect1", QDBusConnection::SessionBus);
        new SessionTimedate1Proxy("org.deepin.dde.Timedate1", "/org/deepin/dde/Timedate1", "org.deepin.dde.Timedate1",
            "org.deepin.daemon.Timedate1", "/org/deepin/daemon/Timedate1", "org.deepin.daemon.Timedate1", QDBusConnection::SessionBus);
        new SessionSystemInfo1Proxy("org.deepin.dde.SystemInfo1", "/org/deepin/dde/SystemInfo1", "org.deepin.dde.SystemInfo1",
            "org.deepin.daemon.SystemInfo1", "/org/deepin/daemon/SystemInfo1", "org.deepin.daemon.SystemInfo1", QDBusConnection::SessionBus);
        new SessionXEventMonitor1Proxy("org.deepin.dde.XEventMonitor1", "/org/deepin/dde/XEventMonitor1", "org.deepin.dde.XEventMonitor1",
            "org.deepin.api.XEventMonitor1", "/org/deepin/api/XEventMonitor1", "org.deepin.api.XEventMonitor1", QDBusConnection::SessionBus);
    }
    if (serviceMoudle.contains("startdde")) {
        qInfo() << "Start the proxy module:" << "startdde";
        // V0 -> V1
        new SessionDisplay1Proxy("org.deepin.dde.Display1", "/org/deepin/dde/Display1", "org.deepin.dde.Display1",
            "com.deepin.daemon.Display", "/com/deepin/daemon/Display", "com.deepin.daemon.Display", QDBusConnection::SessionBus);
    }
    if (serviceMoudle.contains("dde-session")) {
        qInfo() << "Start the proxy module:" << "dde-session";
        // V0 -> V1
        new SessionSessionManager1Proxy("org.deepin.dde.SessionManager1", "/org/deepin/dde/SessionManager1", "org.deepin.dde.SessionManager1",
            "com.deepin.SessionManager", "/com/deepin/SessionManager", "com.deepin.SessionManager", QDBusConnection::SessionBus);
        new SessionWMSwitcher1Proxy("org.deepin.dde.WMSwitcher1", "/org/deepin/dde/WMSwitcher1", "org.deepin.dde.WMSwitcher1",
            "com.deepin.WMSwitcher", "/com/deepin/WMSwitcher", "com.deepin.WMSwitcher", QDBusConnection::SessionBus);
    }
    if (serviceMoudle.contains("dde-permission-manager")) {
        qInfo() << "Start the proxy module:" << "dde-permission-manager";
        // V0 -> V1
        new SessionPermission1Proxy("org.deepin.dde.Permission1", "/org/deepin/dde/Permission1", "org.deepin.dde.Permission1",
            "org.desktopspec.permission", "/org/desktopspec/permission", "org.desktopspec.permission", QDBusConnection::SessionBus);
    }
    if (serviceMoudle.contains("dde-application-manager")) {
        qInfo() << "Start the proxy module:" << "dde-application-manager";
        // V0 -> V1
        new SessionDaemonDock1Proxy("org.deepin.dde.daemon.Dock1", "/org/deepin/dde/daemon/Dock1", "org.deepin.dde.daemon.Dock1",
            "com.deepin.dde.daemon.Dock", "/com/deepin/dde/daemon/Dock", "com.deepin.dde.daemon.Dock", QDBusConnection::SessionBus);
        new SessionDaemonLauncher1Proxy("org.deepin.dde.daemon.Launcher1", "/org/deepin/dde/daemon/Launcher1", "org.deepin.dde.daemon.Launcher1",
            "com.deepin.dde.daemon.Launcher", "/com/deepin/dde/daemon/Launcher", "com.deepin.dde.daemon.Launcher", QDBusConnection::SessionBus);
        // V0 StartManager的服务名为"com.deepin.SessionManager"
        new SessionStartManager1Proxy("org.deepin.dde.StartManager1", "/org/deepin/dde/StartManager1", "org.deepin.dde.StartManager1",
            "com.deepin.SessionManager", "/com/deepin/StartManager", "com.deepin.StartManager", QDBusConnection::SessionBus);
        new SessionMimeManager1Proxy("org.desktopspec.ApplicationManager1", "/org/desktopspec/ApplicationManager1/MimeManager1", "org.desktopspec.MimeManager1",
            "com.deepin.daemon.Mime", "/com/deepin/daemon/Mime", "com.deepin.daemon.Mime", QDBusConnection::SessionBus);
    }
    if (serviceMoudle.contains("dde-control-center")) {
        qInfo() << "Start the proxy module:" << "dde-control-center";
        // V0 -> V1
        new SessionControlCenter1Proxy("org.deepin.dde.ControlCenter1", "/org/deepin/dde/ControlCenter1", "org.deepin.dde.ControlCenter1",
            "com.deepin.dde.ControlCenter", "/com/deepin/dde/ControlCenter", "com.deepin.dde.ControlCenter", QDBusConnection::SessionBus);
    }
    if (serviceMoudle.contains("dde-dock")) {
        qInfo() << "Start the proxy module:" << "dde-dock";
        // V0 -> V1
        new SessionDock1Proxy("org.deepin.dde.Dock1", "/org/deepin/dde/Dock1", "org.deepin.dde.Dock1",
            "com.deepin.dde.Dock", "/com/deepin/dde/Dock", "com.deepin.dde.Dock", QDBusConnection::SessionBus);
    }
    if (serviceMoudle.contains("dde-launcher")) {
        qInfo() << "Start the proxy module:" << "dde-launcher";
        // V0 -> V1
        new SessionLauncher1Proxy("org.deepin.dde.Launcher1", "/org/deepin/dde/Launcher1", "org.deepin.dde.Launcher1",
            "com.deepin.dde.Launcher", "/com/deepin/dde/Launcher", "com.deepin.dde.Launcher", QDBusConnection::SessionBus);
    }
    if (serviceMoudle.contains("dde-lock")) {
        qInfo() << "Start the proxy module:" << "dde-lock";
        // V0 -> V1
        new SessionLockFront1Proxy("org.deepin.dde.LockFront1", "/org/deepin/dde/LockFront1", "org.deepin.dde.LockFront1",
            "com.deepin.dde.lockFront", "/com/deepin/dde/lockFront", "com.deepin.dde.lockFront", QDBusConnection::SessionBus);
        new SessionShutdownFront1Proxy("org.deepin.dde.ShutdownFront1", "/org/deepin/dde/ShutdownFront1", "org.deepin.dde.ShutdownFront1",
            "com.deepin.dde.shutdownFront", "/com/deepin/dde/shutdownFront", "com.deepin.dde.shutdownFront", QDBusConnection::SessionBus);
    }
    if (serviceMoudle.contains("dde-osd")) {
        qInfo() << "Start the proxy module:" << "dde-osd";
        // V0 -> V1
        new SessionNotification1Proxy("org.deepin.dde.Notification1", "/org/deepin/dde/Notification1", "org.deepin.dde.Notification1",
            "com.deepin.dde.Notification", "/com/deepin/dde/Notification", "com.deepin.dde.Notification", QDBusConnection::SessionBus);
        new SessionOsd1Proxy("org.deepin.dde.Osd1", "/org/deepin/dde/Osd1", "org.deepin.dde.Osd1",
            "com.deepin.dde.osd", "/", "com.deepin.dde.osd", QDBusConnection::SessionBus);
    }

    qInfo() << "proxy modules finish to start.";

    return a.exec();
}
