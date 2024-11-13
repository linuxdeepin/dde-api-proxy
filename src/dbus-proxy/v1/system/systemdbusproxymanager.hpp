// SPDX-FileCopyrightText: 2018 - 2024 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "dbusproxybasemanager.hpp"
#include "org_deepin_dde_Accounts1.hpp"
#include "org_deepin_dde_Display1.hpp"
#include "org_deepin_dde_Gesture1.hpp"
#include "org_deepin_dde_Grub2.hpp"
#include "org_deepin_dde_Grub2_Theme.hpp"
#include "org_deepin_dde_Grub2_EditAuthentication.hpp"
#include "org_deepin_dde_Network1.hpp"
#include "org_deepin_dde_Power1.hpp"
#include "org_deepin_dde_SystemInfo1.hpp"
#include "org_deepin_dde_Timedate1.hpp"
#include "org_deepin_dde_AirplaneMode1.hpp"
#include "org_deepin_dde_Lastore1_Manager.hpp"
#include "org_deepin_dde_LockService1.hpp"
#include "org_deepin_dde_PasswdConf1.hpp"
#include "org_deepin_dde_PowerManager1.hpp"

class SystemDBusProxyManager : public DBusProxyManager {

public:
    SystemDBusProxyManager(QDBusConnection::BusType busType)
    :DBusProxyManager(busType)
    {

    }

    void init() override
    {
        m_dbusProxyFactory.push_back([this]{
            return  new SystemAccounts1Proxy("org.deepin.dde.Accounts1", "/org/deepin/dde/Accounts1", "org.deepin.dde.Accounts1",
                                        "com.deepin.daemon.Accounts", "/com/deepin/daemon/Accounts", "com.deepin.daemon.Accounts", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SystemDisplay1Proxy("org.deepin.dde.Display1", "/org/deepin/dde/Display1", "org.deepin.dde.Display1",
                                        "com.deepin.system.Display", "/com/deepin/system/Display", "com.deepin.system.Display", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SystemGesture1Proxy("org.deepin.dde.Gesture1", "/org/deepin/dde/Gesture1", "org.deepin.dde.Gesture1",
                                        "com.deepin.daemon.Gesture", "/com/deepin/daemon/Gesture", "com.deepin.daemon.Gesture", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SystemGrub2Proxy("org.deepin.dde.Grub2", "/org/deepin/dde/Grub2", "org.deepin.dde.Grub2",
                                        "com.deepin.daemon.Grub2", "/com/deepin/daemon/Grub2", "com.deepin.daemon.Grub2", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SystemGrub2ThemeProxy("org.deepin.dde.Grub2", "/org/deepin/dde/Grub2/Theme", "org.deepin.dde.Grub2.Theme",
                                        "com.deepin.daemon.Grub2", "/com/deepin/daemon/Grub2/Theme", "com.deepin.daemon.Grub2.Theme", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SystemGrub2EditAuthenticationProxy("org.deepin.dde.Grub2", "/org/deepin/dde/Grub2/EditAuthentication", "org.deepin.dde.Grub2.EditAuthentication",
                                        "com.deepin.daemon.Grub2", "/com/deepin/daemon/Grub2/EditAuthentication", "com.deepin.daemon.Grub2.EditAuthentication", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SystemNetwork1Proxy("org.deepin.dde.Network1", "/org/deepin/dde/Network1", "org.deepin.dde.Network1",
                                        "com.deepin.system.Network", "/com/deepin/system/Network", "com.deepin.system.Network", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SystemPower1Proxy("org.deepin.dde.Power1", "/org/deepin/dde/Power1", "org.deepin.dde.Power1",
                                        "com.deepin.system.Power", "/com/deepin/system/Power", "com.deepin.system.Power", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SystemSystemInfo1Proxy("org.deepin.dde.SystemInfo1", "/org/deepin/dde/SystemInfo1", "org.deepin.dde.SystemInfo1",
                                        "com.deepin.system.SystemInfo", "/com/deepin/system/SystemInfo", "com.deepin.system.SystemInfo", m_busType);

        });

        m_dbusProxyFactory.push_back([this]{
            return  new SystemTimedate1Proxy("org.deepin.dde.Timedate1", "/org/deepin/dde/Timedate1", "org.deepin.dde.Timedate1",
                                        "com.deepin.daemon.Timedated", "/com/deepin/daemon/Timedated", "com.deepin.daemon.Timedated", m_busType);

        });

        m_dbusProxyFactory.push_back([this]{
            return  new SystemAirplaneMode1Proxy("org.deepin.dde.AirplaneMode1", "/org/deepin/dde/AirplaneMode1", "org.deepin.dde.AirplaneMode1",
                                        "com.deepin.daemon.AirplaneMode", "/com/deepin/daemon/AirplaneMode", "com.deepin.daemon.AirplaneMode", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return new SystemLastore1ManagerProxy("org.deepin.dde.Lastore1", "/org/deepin/dde/Lastore1", "org.deepin.dde.Lastore1.Manager",
                                        "com.deepin.lastore", "/com/deepin/lastore", "com.deepin.lastore.Manager", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return new SystemLockService1Proxy("org.deepin.dde.LockService1", "/org/deepin/dde/LockService1", "org.deepin.dde.LockService1",
                                        "com.deepin.dde.LockService", "/com/deepin/dde/LockService", "com.deepin.dde.LockService", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return new SystemPasswdConf1Proxy("org.deepin.dde.PasswdConf1", "/org/deepin/dde/PasswdConf1", "org.deepin.dde.PasswdConf1",
                                        "com.deepin.daemon.PasswdConf", "/com/deepin/daemon/PasswdConf", "com.deepin.daemon.PasswdConf", m_busType);
        });

        m_dbusProxyFactory.push_back([this]{
            return  new SystemPowerManager1Proxy("org.deepin.dde.PowerManager1", "/org/deepin/dde/PowerManager1", "org.deepin.dde.PowerManager1",
                                        "com.deepin.daemon.PowerManager", "/com/deepin/daemon/PowerManager", "com.deepin.daemon.PowerManager", m_busType);
        });
    }
};
