// SPDX-FileCopyrightText: 2018 - 2024 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "dbusproxybasemanager.hpp"
#include "org_deepin_dde_Appearance1.hpp"
#include "org_deepin_dde_Audio1.hpp"
#include "org_deepin_dde_Bluetooth1.hpp"
#include "org_deepin_dde_InputDevices1.hpp"
#include "org_deepin_dde_InputDevice1_Wacom.hpp"
#include "org_deepin_dde_InputDevice1_TouchPad.hpp"
#include "org_deepin_dde_InputDevice1_Keyboard.hpp"
#include "org_deepin_dde_InputDevice1_Mouse.hpp"
#include "org_deepin_dde_InputDevice1_TrackPoint.hpp"
#include "org_deepin_dde_Keybinding1.hpp"
#include "org_deepin_dde_LangSelector1.hpp"
#include "org_deepin_dde_Network1.hpp"
#include "org_deepin_dde_Power1.hpp"
#include "org_deepin_dde_SoundEffect1.hpp"
#include "org_deepin_dde_SystemInfo1.hpp"
#include "org_deepin_dde_Timedate1.hpp"
#include "org_deepin_dde_TrayManager1.hpp"
#include "org_deepin_dde_XEventMonitor1.hpp"
#include "org_deepin_dde_Display1.hpp"
#include "org_deepin_dde_SessionManager1.hpp"
#include "org_deepin_dde_WMSwitcher1.hpp"
#include "org_deepin_dde_Permission1.hpp"
#include "org_deepin_dde_daemon_Dock1.hpp"
#include "org_deepin_dde_daemon_Launcher1.hpp"
#include "org_deepin_dde_StartManager1.hpp"
#include "org_desktopspec_MimeManager1.hpp"
#include "org_deepin_dde_ControlCenter1.hpp"
#include "org_deepin_dde_Dock1.hpp"
#include "org_deepin_dde_Launcher1.hpp"
#include "org_deepin_dde_LockFront1.hpp"
#include "org_deepin_dde_ShutdownFront1.hpp"
#include "org_deepin_dde_Notification1.hpp"
#include "org_deepin_dde_Osd1.hpp"

const QString &AppearanceOldDbusName = "com.deepin.daemon.Appearance";
const QString &AudioOldDbusName = "com.deepin.daemon.Audio";
const QString &BluetoothOldDbusName = "com.deepin.daemon.Bluetooth";
const QString &InputDevicesOldDbusName = "com.deepin.daemon.InputDevices";
const QString &KeybindingOldDbusName = "com.deepin.daemon.Keybinding";
const QString &LangSelectorOldDbusName = "com.deepin.daemon.LangSelector";
const QString &NetworkOldDbusName = "com.deepin.daemon.Network";
const QString &PowerOldDbusName = "com.deepin.daemon.Power";
const QString &SoundEffectOldDbusName = "com.deepin.daemon.SoundEffect";
const QString &SystemInfoOldDbusName = "com.deepin.daemon.SystemInfo";
const QString &TimedateOldDbusName = "com.deepin.daemon.Timedate";
const QString &TrayManagerOldDbusName = "com.deepin.dde.TrayManager";

class SessionDBusProxyManager : public DBusProxyManager {

public:
    SessionDBusProxyManager(QDBusConnection::BusType busType)
    :DBusProxyManager(busType)
    {

    }

    void init() override
    {
        m_dbusProxyFactory.push_back([this]{
            return   new SessionAppearance1Proxy("org.deepin.dde.Appearance1", "/org/deepin/dde/Appearance1", "org.deepin.dde.Appearance1",
                                        "com.deepin.daemon.Appearance", "/com/deepin/daemon/Appearance", "com.deepin.daemon.Appearance", m_busType);
       });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionAudio1Proxy("org.deepin.dde.Audio1", "/org/deepin/dde/Audio1", "org.deepin.dde.Audio1",
                                         "com.deepin.daemon.Audio", "/com/deepin/daemon/Audio", "com.deepin.daemon.Audio", m_busType);
       });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionBluetooth1Proxy("org.deepin.dde.Bluetooth1", "/org/deepin/dde/Bluetooth1", "org.deepin.dde.Bluetooth1",
                                        "com.deepin.daemon.Bluetooth", "/com/deepin/daemon/Bluetooth", "com.deepin.daemon.Bluetooth", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionInputDevices1Proxy("org.deepin.dde.InputDevices1", "/org/deepin/dde/InputDevices1", "org.deepin.dde.InputDevices1",
                                        "com.deepin.daemon.InputDevices", "/com/deepin/daemon/InputDevices", "com.deepin.daemon.InputDevices", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionInputDevice1WacomProxy("org.deepin.dde.InputDevices1", "/org/deepin/dde/InputDevice1/Wacom", "org.deepin.dde.InputDevice1.Wacom",
                                        "com.deepin.daemon.InputDevices", "/com/deepin/daemon/InputDevice/Wacom", "com.deepin.daemon.InputDevice.Wacom", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionInputDevice1TouchPadProxy("org.deepin.dde.InputDevices1", "/org/deepin/dde/InputDevice1/TouchPad", "org.deepin.dde.InputDevice1.TouchPad",
                                        "com.deepin.daemon.InputDevices", "/com/deepin/daemon/InputDevice/TouchPad", "com.deepin.daemon.InputDevice.TouchPad", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionInputDevice1KeyboardProxy("org.deepin.dde.InputDevices1", "/org/deepin/dde/InputDevice1/Keyboard", "org.deepin.dde.InputDevice1.Keyboard",
                                        "com.deepin.daemon.InputDevices", "/com/deepin/daemon/InputDevice/Keyboard", "com.deepin.daemon.InputDevice.Keyboard", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionInputDevice1MouseProxy("org.deepin.dde.InputDevices1", "/org/deepin/dde/InputDevice1/Mouse", "org.deepin.dde.InputDevice1.Mouse",
                                        "com.deepin.daemon.InputDevices", "/com/deepin/daemon/InputDevice/Mouse", "com.deepin.daemon.InputDevice.Mouse", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionInputDevice1TrackPointProxy("org.deepin.dde.InputDevices1", "/org/deepin/dde/InputDevice1/Mouse", "org.deepin.dde.InputDevice1.TrackPoint",
                                        "com.deepin.daemon.InputDevices", "/com/deepin/daemon/InputDevice/Mouse", "com.deepin.daemon.InputDevice.TrackPoint", m_busType);

        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionKeybinding1Proxy("org.deepin.dde.Keybinding1", "/org/deepin/dde/Keybinding1", "org.deepin.dde.Keybinding1",
                                        "com.deepin.daemon.Keybinding", "/com/deepin/daemon/Keybinding", "com.deepin.daemon.Keybinding", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionLangSelector1Proxy("org.deepin.dde.LangSelector1", "/org/deepin/dde/LangSelector1", "org.deepin.dde.LangSelector1",
                                        "com.deepin.daemon.LangSelector", "/com/deepin/daemon/LangSelector", "com.deepin.daemon.LangSelector", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionNetwork1Proxy("org.deepin.dde.Network1", "/org/deepin/dde/Network1", "org.deepin.dde.Network1",
                                        "com.deepin.daemon.Network", "/com/deepin/daemon/Network", "com.deepin.daemon.Network", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionPower1Proxy("org.deepin.dde.Power1", "/org/deepin/dde/Power1", "org.deepin.dde.Power1",
                                        "com.deepin.daemon.Power", "/com/deepin/daemon/Power", "com.deepin.daemon.Power", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionSoundEffect1Proxy("org.deepin.dde.SoundEffect1", "/org/deepin/dde/SoundEffect1", "org.deepin.dde.SoundEffect1",
                                        "com.deepin.daemon.SoundEffect", "/com/deepin/daemon/SoundEffect", "com.deepin.daemon.SoundEffect", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionSystemInfo1Proxy("org.deepin.dde.SystemInfo1", "/org/deepin/dde/SystemInfo1", "org.deepin.dde.SystemInfo1",
                                        "com.deepin.daemon.SystemInfo", "/com/deepin/daemon/SystemInfo", "com.deepin.daemon.SystemInfo", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionTimedate1Proxy("org.deepin.dde.Timedate1", "/org/deepin/dde/Timedate1", "org.deepin.dde.Timedate1",
                                        "com.deepin.daemon.Timedate", "/com/deepin/daemon/Timedate", "com.deepin.daemon.Timedate", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionTrayManager1Proxy("org.deepin.dde.TrayManager1", "/org/deepin/dde/TrayManager1", "org.deepin.dde.TrayManager1",
                                        "com.deepin.dde.TrayManager", "/com/deepin/dde/TrayManager", "com.deepin.dde.TrayManager", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionXEventMonitor1Proxy("org.deepin.dde.XEventMonitor1", "/org/deepin/dde/XEventMonitor1", "org.deepin.dde.XEventMonitor1",
                                        "com.deepin.api.XEventMonitor", "/com/deepin/api/XEventMonitor", "com.deepin.api.XEventMonitor", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionDisplay1Proxy("org.deepin.dde.Display1", "/org/deepin/dde/Display1", "org.deepin.dde.Display1",
                                        "com.deepin.daemon.Display", "/com/deepin/daemon/Display", "com.deepin.daemon.Display", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionSessionManager1Proxy("org.deepin.dde.SessionManager1", "/org/deepin/dde/SessionManager1", "org.deepin.dde.SessionManager1",
                                        "com.deepin.SessionManager", "/com/deepin/SessionManager", "com.deepin.SessionManager", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionWMSwitcher1Proxy("org.deepin.dde.WMSwitcher1", "/org/deepin/dde/WMSwitcher1", "org.deepin.dde.WMSwitcher1",
                                        "com.deepin.WMSwitcher", "/com/deepin/WMSwitcher", "com.deepin.WMSwitcher", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionPermission1Proxy("org.deepin.dde.Permission1", "/org/deepin/dde/Permission1", "org.deepin.dde.Permission1",
                                        "org.desktopspec.permission", "/org/desktopspec/permission", "org.desktopspec.permission", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionDaemonDock1Proxy("org.deepin.dde.daemon.Dock1", "/org/deepin/dde/daemon/Dock1", "org.deepin.dde.daemon.Dock1",
                                        "com.deepin.dde.daemon.Dock", "/com/deepin/dde/daemon/Dock", "com.deepin.dde.daemon.Dock", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionDaemonLauncher1Proxy("org.deepin.dde.daemon.Launcher1", "/org/deepin/dde/daemon/Launcher1", "org.deepin.dde.daemon.Launcher1",
                                        "com.deepin.dde.daemon.Launcher", "/com/deepin/dde/daemon/Launcher", "com.deepin.dde.daemon.Launcher", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionStartManager1Proxy("org.deepin.dde.StartManager1", "/org/deepin/dde/StartManager1", "org.deepin.dde.StartManager1",
                                        "com.deepin.SessionManager", "/com/deepin/StartManager", "com.deepin.StartManager", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionMimeManager1Proxy("org.desktopspec.ApplicationManager1", "/org/desktopspec/ApplicationManager1/MimeManager1", "org.desktopspec.MimeManager1",
                                        "com.deepin.daemon.Mime", "/com/deepin/daemon/Mime", "com.deepin.daemon.Mime", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionControlCenter1Proxy("org.deepin.dde.ControlCenter1", "/org/deepin/dde/ControlCenter1", "org.deepin.dde.ControlCenter1",
                                        "com.deepin.dde.ControlCenter", "/com/deepin/dde/ControlCenter", "com.deepin.dde.ControlCenter", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionDock1Proxy("org.deepin.dde.Dock1", "/org/deepin/dde/Dock1", "org.deepin.dde.Dock1",
                                        "com.deepin.dde.Dock", "/com/deepin/dde/Dock", "com.deepin.dde.Dock", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionLauncher1Proxy("org.deepin.dde.Launcher1", "/org/deepin/dde/Launcher1", "org.deepin.dde.Launcher1",
                                        "com.deepin.dde.Launcher", "/com/deepin/dde/Launcher", "com.deepin.dde.Launcher", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionLockFront1Proxy("org.deepin.dde.LockFront1", "/org/deepin/dde/LockFront1", "org.deepin.dde.LockFront1",
                                        "com.deepin.dde.lockFront", "/com/deepin/dde/lockFront", "com.deepin.dde.lockFront", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionShutdownFront1Proxy("org.deepin.dde.ShutdownFront1", "/org/deepin/dde/ShutdownFront1", "org.deepin.dde.ShutdownFront1",
                                        "com.deepin.dde.shutdownFront", "/com/deepin/dde/shutdownFront", "com.deepin.dde.shutdownFront", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return   new SessionNotification1Proxy("org.deepin.dde.Notification1", "/org/deepin/dde/Notification1", "org.deepin.dde.Notification1",
                                        "com.deepin.dde.Notification", "/com/deepin/dde/Notification", "com.deepin.dde.Notification", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SessionOsd1Proxy("org.deepin.dde.Osd1", "/org/deepin/dde/Osd1", "org.deepin.dde.Osd1",
                                        "com.deepin.dde.osd", "/", "com.deepin.dde.osd", m_busType);
        });
    }
};
