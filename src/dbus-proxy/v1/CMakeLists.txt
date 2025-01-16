set(PRO_NAME "dde-api-dbus-proxy-v1")

file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/dbus-proxy/dbusinterface/v1/session/)
file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/dbus-proxy/dbusinterface/v1/system/)
list(APPEND QT_DBUS_PROXY_INTERFACE_INCLUDE 
    ${PROJECT_BINARY_DIR}/dbus-proxy/dbusinterface/v1/session/
    ${PROJECT_BINARY_DIR}/dbus-proxy/dbusinterface/v1/system/
)

file(GLOB_RECURSE PROXY_DBUS_TYPES ${DBUS_FILE_PATH}/types/*)

# dbus interface
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Accounts1.xml System_Accounts1 v1/system/system_org_deepin_dde_Accounts1 ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Accounts1.User.xml System_Accounts1User v1/system/system_org_deepin_dde_Accounts1_User ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Gesture1.xml System_Gesture1 v1/system/system_org_deepin_dde_Gesture1 ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Grub2.xml System_Grub2 v1/system/system_org_deepin_dde_Grub2 ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Grub2.Theme.xml System_Grub2Theme v1/system/system_org_deepin_dde_Grub2_Theme ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Grub2.EditAuthentication.xml System_Grub2EditAuthentication v1/system/system_org_deepin_dde_Grub2_EditAuthentication ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.PasswdConf1.xml System_PasswdConf1 v1/system/system_org_deepin_dde_PasswdConf1 ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Lastore1.Manager.xml System_Lastore1Manager v1/system/system_org_deepin_dde_Lastore1_Manager ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Lastore1.Updater.xml System_Lastore1Updater v1/system/system_org_deepin_dde_Lastore1_Updater ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Lastore1.Job.xml System_Lastore1Job v1/system/system_org_deepin_dde_Lastore1_Job ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.LockService1.xml System_LockService1 v1/system/system_org_deepin_dde_LockService1 ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Display1.xml System_Display1 v1/system/system_org_deepin_dde_Display1 OFF)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Power1.xml System_Power1 v1/system/system_org_deepin_dde_Power1 OFF)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.SystemInfo1.xml System_SystemInfo1 v1/system/system_org_deepin_dde_SystemInfo1 OFF)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Timedate1.xml System_Timedate1 v1/system/system_org_deepin_dde_Timedate1 OFF)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.Network1.xml System_Network1 v1/system/system_org_deepin_dde_Network1 OFF)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.AirplaneMode1.xml System_AirplaneMode1 v1/system/system_org_deepin_dde_AirplaneMode1 ON)
qt5_add_dbus_proxy_interface_fix(SYSTEM_PROXY_INTERFACE_SOURCES v1/system/org.deepin.dde.PowerManager1.xml System_PowerManager1 v1/system/system_org_deepin_dde_PowerManager1 ON)

qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.XEventMonitor1.xml Session_XEventMonitor1 v1/session/session_org_deepin_dde_XEventMonitor1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Appearance1.xml Session_Appearance1 v1/session/session_org_deepin_dde_Appearance1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Audio1.xml Session_Audio1 v1/session/session_org_deepin_dde_Audio1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Audio1.Sink.xml Session_Audio1Sink v1/session/session_org_deepin_dde_Audio1_Sink ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Audio1.Source.xml Session_Audio1Source v1/session/session_org_deepin_dde_Audio1_Source ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Bluetooth1.xml Session_Bluetooth1 v1/session/session_org_deepin_dde_Bluetooth1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Display1.xml Session_Display1 v1/session/session_org_deepin_dde_Display1 OFF)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Display1.Monitor.xml Session_Display1Monitor v1/session/session_org_deepin_dde_Display1_Monitor ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Keybinding1.xml Session_Keybinding1 v1/session/session_org_deepin_dde_Keybinding1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.LangSelector1.xml Session_LangSelector1 v1/session/session_org_deepin_dde_LangSelector1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Network1.xml Session_Network1 v1/session/session_org_deepin_dde_Network1 OFF)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Permission1.xml Session_Permission1 v1/session/session_org_deepin_dde_Permission1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Power1.xml Session_Power1 v1/session/session_org_deepin_dde_Power1 OFF)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.SoundEffect1.xml Session_SoundEffect1 v1/session/session_org_deepin_dde_SoundEffect1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.SystemInfo1.xml Session_SystemInfo1 v1/session/session_org_deepin_dde_SystemInfo1 OFF)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Timedate1.xml Session_Timedate1 v1/session/session_org_deepin_dde_Timedate1 OFF)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.ControlCenter1.xml Session_ControlCenter1 v1/session/session_org_deepin_dde_ControlCenter1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.ControlCenter1.GrandSearch.xml Session_ControlCenter1GrandSearch v1/session/session_org_deepin_dde_ControlCenter1_GrandSearch ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.daemon.Dock1.xml Session_DaemonDock1 v1/session/session_org_deepin_dde_daemon_Dock1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.daemon.Launcher1.xml Session_DaemonLauncher1 v1/session/session_org_deepin_dde_daemon_Launcher1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Dock1.xml Session_Dock1 v1/session/session_org_deepin_dde_Dock1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Launcher1.xml Session_Launcher1 v1/session/session_org_deepin_dde_Launcher1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.LockFront1.xml Session_LockFront1 v1/session/session_org_deepin_dde_LockFront1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Notification1.xml Session_Notification1 v1/session/session_org_deepin_dde_Notification1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.Osd1.xml Session_Osd1 v1/session/session_org_deepin_dde_Osd1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.ShutdownFront1.xml Session_ShutdownFront1 v1/session/session_org_deepin_dde_ShutdownFront1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.TrayManager1.xml Session_TrayManager1 v1/session/session_org_deepin_dde_TrayManager1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.SessionManager1.xml Session_SessionManager1 v1/session/session_org_deepin_dde_SessionManager1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.StartManager1.xml Session_StartManager1 v1/session/session_org_deepin_dde_StartManager1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.desktopspec.MimeManager1.xml Session_MimeManager v1/session/session_org_desktopspec_MimeManager1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.WMSwitcher1.xml Session_WMSwitcher1 v1/session/session_org_deepin_dde_WMSwitcher1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.InputDevices1.xml Session_InputDevices1 v1/session/session_org_deepin_dde_InputDevices1 ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.InputDevice1.Wacom.xml Session_InputDevice1Wacom v1/session/session_org_deepin_dde_InputDevice1_Wacom ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.InputDevice1.TouchPad.xml Session_InputDevice1TouchPad v1/session/session_org_deepin_dde_InputDevice1_TouchPad ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.daemon.Dock1.Entry.xml Session_Dock1Entry v1/session/session_org_deepin_dde_daemon_Dock1_Entry ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.InputDevice1.Keyboard.xml Session_InputDevice1Keyboard v1/session/session_org_deepin_dde_InputDevice1_Keyboard ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.InputDevice1.Mouse.xml Session_InputDevice1Mouse v1/session/session_org_deepin_dde_InputDevice1_Mouse ON)
qt5_add_dbus_proxy_interface_fix(SESSION_PROXY_INTERFACE_SOURCES v1/session/org.deepin.dde.InputDevice1.TrackPoint.xml Session_InputDevice1TrackPoint v1/session/session_org_deepin_dde_InputDevice1_TrackPoint ON)

add_executable(${PRO_NAME}
    main.cpp
    ${SYSTEM_PROXY_INTERFACE_SOURCES}
    ${SESSION_PROXY_INTERFACE_SOURCES}
    ${PROXY_DBUS_TYPES}
)
target_link_libraries(${PRO_NAME}
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::DBus
    ${DtkCore_LIBRARIES}
    PolkitQt5-1::Core
 )
target_include_directories(${PRO_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${PROXY_DBUSEXTENDED_INCLUDE}
    ${DBUS_PROXY_SOURCE_PATH}/dbus/
    ${DBUS_PROXY_SOURCE_PATH}/common/
    ${QT_DBUS_PROXY_INTERFACE_INCLUDE}
    ${DBUS_FILE_PATH}
    ${DtkCore_INCLUDE_DIRS}
)
install(TARGETS ${PRO_NAME} DESTINATION lib/dde-api-proxy/dbus-proxy/)