
set(DBUS_FILE_PATH ${PROJECT_SOURCE_DIR}/file/dbus)

# qtdbusextended
set(PROXY_DBUSEXTENDED_INCLUDE ${DBUS_FILE_PATH}/qtdbusextended/)
list(APPEND PROXY_DBUSEXTENDED_SOURCE
    ${DBUS_FILE_PATH}/qtdbusextended/DBusExtended
    ${DBUS_FILE_PATH}/qtdbusextended/dbusextended.h
    ${DBUS_FILE_PATH}/qtdbusextended/DBusExtendedAbstractInterface
    ${DBUS_FILE_PATH}/qtdbusextended/dbusextendedabstractinterface.h
    ${DBUS_FILE_PATH}/qtdbusextended/dbusextendedpendingcallwatcher_p.h
    ${DBUS_FILE_PATH}/qtdbusextended/dbusextendedabstractinterface.cpp
    ${DBUS_FILE_PATH}/qtdbusextended/dbusextendedpendingcallwatcher.cpp
)

add_subdirectory("dbus-proxy")
