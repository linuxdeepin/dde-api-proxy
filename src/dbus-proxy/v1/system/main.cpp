

#include <QCoreApplication>
#include <QCommandLineParser>
#include <QDebug>
#include <QStringList>

#include "system/org_deepin_dde_Accounts1.hpp"
#include "system/org_deepin_dde_Display1.hpp"
#include "system/org_deepin_dde_Gesture1.hpp"
#include "system/org_deepin_dde_Grub2.hpp"
#include "system/org_deepin_dde_Grub2_Theme.hpp"
#include "system/org_deepin_dde_Grub2_EditAuthentication.hpp"
#include "system/org_deepin_dde_Lastore1_Manager.hpp"
#include "system/org_deepin_dde_LockService1.hpp"
#include "system/org_deepin_dde_Network1.hpp"
#include "system/org_deepin_dde_PasswdConf1.hpp"
#include "system/org_deepin_dde_Power1.hpp"
#include "system/org_deepin_dde_SystemInfo1.hpp"
#include "system/org_deepin_dde_Timedate1.hpp"

#include "deepinruntime.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    if (!DeepinRuntime::CheckStartddeSession()) {
        qWarning() << "check startdde session error.";
        return 0;
    }
    QCommandLineParser parser;
    parser.setApplicationDescription("dde-api-proxy-system");
    parser.addHelpOption();
    QCommandLineOption allOption(QStringList() << "a" << "all", "all system proxy.");
    QCommandLineOption ddeDaemonOption(QStringList() << "d" << "ddedaemon", "dde-daemon system proxy.");
    QCommandLineOption lastoreDaemonOption(QStringList() << "l" << "lastoredaemon", "lastore-daemon system proxy.");
    QCommandLineOption ddeLockServiceOption(QStringList() << "L" << "ddelockservice", "dde-lockservice system proxy.");
    QCommandLineOption deepinPWCheckOption(QStringList() << "p" << "deepinpwcheck", "deepin-pw-check system proxy.");
    parser.addOption(allOption);
    parser.addOption(ddeDaemonOption);
    parser.addOption(lastoreDaemonOption);
    parser.addOption(ddeLockServiceOption);
    parser.addOption(deepinPWCheckOption);
    parser.process(a);

    QStringList serviceMoudle;
    if(parser.isSet(allOption)) {
        serviceMoudle << "dde-daemon" << "lastore-daemon" << "dde-lockservice" << "deepin-pw-check";
    }
    if (parser.isSet(ddeDaemonOption)) {
        serviceMoudle << "dde-daemon";
    }
    if (parser.isSet(lastoreDaemonOption)) {
        serviceMoudle << "lastore-daemon";
    }
    if (parser.isSet(ddeLockServiceOption)) {
        serviceMoudle << "dde-lockservice";
    }
    if (parser.isSet(deepinPWCheckOption)) {
        serviceMoudle << "deepin-pw-check";
    }
    serviceMoudle.removeDuplicates();
    qInfo() << "";
    qInfo() << "Will to start proxy modules:" << serviceMoudle;

    if (serviceMoudle.contains("dde-daemon")) {
        qInfo() << "Start the proxy module:" << "dde-daemon";
        // V0 -> V1
        new SystemAccounts1Proxy("org.deepin.dde.Accounts1", "/org/deepin/dde/Accounts1", "org.deepin.dde.Accounts1", 
            "com.deepin.daemon.Accounts", "/com/deepin/daemon/Accounts", "com.deepin.daemon.Accounts", QDBusConnection::SystemBus);
        new SystemDisplay1Proxy("org.deepin.dde.Display1", "/org/deepin/dde/Display1", "org.deepin.dde.Display1", 
            "com.deepin.system.Display", "/com/deepin/system/Display", "com.deepin.system.Display", QDBusConnection::SystemBus);
        new SystemGesture1Proxy("org.deepin.dde.Gesture1", "/org/deepin/dde/Gesture1", "org.deepin.dde.Gesture1", 
            "com.deepin.daemon.Gesture", "/com/deepin/daemon/Gesture", "com.deepin.daemon.Gesture", QDBusConnection::SystemBus);
        new SystemGrub2Proxy("org.deepin.dde.Grub2", "/org/deepin/dde/Grub2", "org.deepin.dde.Grub2", 
            "com.deepin.daemon.Grub2", "/com/deepin/daemon/Grub2", "com.deepin.daemon.Grub2", QDBusConnection::SystemBus);
        new SystemGrub2ThemeProxy("org.deepin.dde.Grub2", "/org/deepin/dde/Grub2/Theme", "org.deepin.dde.Grub2.Theme", 
            "com.deepin.daemon.Grub2", "/com/deepin/daemon/Grub2/Theme", "com.deepin.daemon.Grub2.Theme", QDBusConnection::SystemBus);
        new SystemGrub2EditAuthenticationProxy("org.deepin.dde.Grub2", "/org/deepin/dde/Grub2/EditAuthentication", "org.deepin.dde.Grub2.EditAuthentication", 
            "com.deepin.daemon.Grub2", "/com/deepin/daemon/Grub2/EditAuthentication", "com.deepin.daemon.Grub2.EditAuthentication", QDBusConnection::SystemBus);
        new SystemNetwork1Proxy("org.deepin.dde.Network1", "/org/deepin/dde/Network1", "org.deepin.dde.Network1", 
            "com.deepin.system.Network", "/com/deepin/system/Network", "com.deepin.system.Network", QDBusConnection::SystemBus);
        new SystemPower1Proxy("org.deepin.dde.Power1", "/org/deepin/dde/Power1", "org.deepin.dde.Power1", 
            "com.deepin.system.Power", "/com/deepin/system/Power", "com.deepin.system.Power", QDBusConnection::SystemBus);
        new SystemSystemInfo1Proxy("org.deepin.dde.SystemInfo1", "/org/deepin/dde/SystemInfo1", "org.deepin.dde.SystemInfo1", 
            "com.deepin.system.SystemInfo", "/com/deepin/system/SystemInfo", "com.deepin.system.SystemInfo", QDBusConnection::SystemBus);
        new SystemTimedate1Proxy("org.deepin.dde.Timedate1", "/org/deepin/dde/Timedate1", "org.deepin.dde.Timedate1", 
            "com.deepin.daemon.Timedated", "/com/deepin/daemon/Timedated", "com.deepin.daemon.Timedated", QDBusConnection::SystemBus);
        // V0.5 -> V1
        new SystemAccounts1Proxy("org.deepin.dde.Accounts1", "/org/deepin/dde/Accounts1", "org.deepin.dde.Accounts1", 
            "org.deepin.daemon.Accounts1", "/org/deepin/daemon/Accounts1", "org.deepin.daemon.Accounts1", QDBusConnection::SystemBus);
        new SystemGrub2Proxy("org.deepin.dde.Grub2", "/org/deepin/dde/Grub2", "org.deepin.dde.Grub2", 
            "org.deepin.daemon.Grub2", "/org/deepin/daemon/Grub2", "org.deepin.daemon.Grub2", QDBusConnection::SystemBus);
        new SystemGrub2ThemeProxy("org.deepin.dde.Grub2", "/org/deepin/dde/Grub2/Theme", "org.deepin.dde.Grub2.Theme", 
            "org.deepin.daemon.Grub2", "/org/deepin/daemon/Grub2/Theme", "org.deepin.daemon.Grub2.Theme", QDBusConnection::SystemBus);
        new SystemGrub2EditAuthenticationProxy("org.deepin.dde.Grub2", "/org/deepin/dde/Grub2/EditAuthentication", "org.deepin.dde.Grub2.EditAuthentication", 
            "org.deepin.daemon.Grub2", "/org/deepin/daemon/Grub2/EditAuthentication", "org.deepin.daemon.Grub2.EditAuthentication", QDBusConnection::SystemBus);
        new SystemPower1Proxy("org.deepin.dde.Power1", "/org/deepin/dde/Power1", "org.deepin.dde.Power1", 
            "org.deepin.system.Power1", "/org/deepin/system/Power1", "org.deepin.system.Power1", QDBusConnection::SystemBus);
        new SystemSystemInfo1Proxy("org.deepin.dde.SystemInfo1", "/org/deepin/dde/SystemInfo1", "org.deepin.dde.SystemInfo1", 
            "org.deepin.system.SystemInfo1", "/org/deepin/system/SystemInfo1", "org.deepin.system.SystemInfo1", QDBusConnection::SystemBus);
        new SystemTimedate1Proxy("org.deepin.dde.Timedate1", "/org/deepin/dde/Timedate1", "org.deepin.dde.Timedate1", 
            "org.deepin.daemon.Timedated1", "/org/deepin/daemon/Timedated1", "org.deepin.daemon.Timedated1", QDBusConnection::SystemBus);
    }
    if (serviceMoudle.contains("lastore-daemon")) {
        qInfo() << "Start the proxy module:" << "lastore-daemon";
        // SystemLastore1ManagerProxy: 包含Manager和Updater
        // V0 -> V1
        new SystemLastore1ManagerProxy("org.deepin.dde.Lastore1", "/org/deepin/dde/Lastore1", "org.deepin.dde.Lastore1.Manager", 
            "com.deepin.lastore", "/com/deepin/lastore", "com.deepin.lastore.Manager", QDBusConnection::SystemBus);
        // V0.5 -> V1
        new SystemLastore1ManagerProxy("org.deepin.dde.Lastore1", "/org/deepin/dde/Lastore1", "org.deepin.dde.Lastore1.Manager", 
            "org.deepin.lastore1", "/org/deepin/lastore1", "org.deepin.lastore1.Manager", QDBusConnection::SystemBus);
    }
    if (serviceMoudle.contains("dde-lockservice")) {
        qInfo() << "Start the proxy module:" << "dde-lockservice";
        // V0 -> V1
        new SystemLockService1Proxy("org.deepin.dde.LockService1", "/org/deepin/dde/LockService1", "org.deepin.dde.LockService1", 
            "com.deepin.dde.LockService", "/com/deepin/dde/LockService", "com.deepin.dde.LockService", QDBusConnection::SystemBus);
    }
    if (serviceMoudle.contains("deepin-pw-check")) {
        qInfo() << "Start the proxy module:" << "deepin-pw-check";
        // V0 -> V1
        new SystemPasswdConf1Proxy("org.deepin.dde.PasswdConf1", "/org/deepin/dde/PasswdConf1", "org.deepin.dde.PasswdConf1", 
            "com.deepin.daemon.PasswdConf", "/com/deepin/daemon/PasswdConf", "com.deepin.daemon.PasswdConf", QDBusConnection::SystemBus);
    }

    qInfo() << "proxy modules finish to start.";

    return a.exec();
}
