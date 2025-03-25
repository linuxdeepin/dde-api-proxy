set(PRO_NAME "dde-dbus-proxy")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# NOTE: While this project is deprecated, it might still be needed for compatibility reasons. Currently it cannot be compiled with Qt6
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core DBus REQUIRED)
find_package(PkgConfig REQUIRED)
find_package(Dtk${DTK_VERSION_MAJOR}Core REQUIRED)
find_package(Dtk${DTK_VERSION_MAJOR}Tools REQUIRED)
find_package(PolkitQt${QT_VERSION_MAJOR}-1 REQUIRED)

macro(qt5_add_dbus_proxy_interface_fix srcs xml class file neednamespace)
    if(${neednamespace})
        execute_process(COMMAND ${DTK_XML2CPP} -c ${class} -p ${PROJECT_BINARY_DIR}/dbus-proxy/dbusinterface/${file} ${DBUS_FILE_PATH}/${xml})
    else()
        execute_process(COMMAND ${DTK_XML2CPP} -c ${class} -p ${PROJECT_BINARY_DIR}/dbus-proxy/dbusinterface/${file} ${DBUS_FILE_PATH}/${xml} -N)
    endif()
  
  list(APPEND ${srcs}
    ${PROJECT_BINARY_DIR}/dbus-proxy/dbusinterface/${file}.h
    ${PROJECT_BINARY_DIR}/dbus-proxy/dbusinterface/${file}.cpp
  )
endmacro(qt5_add_dbus_proxy_interface_fix)

set(DBUS_PROXY_SOURCE_PATH ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory("v1")
# add_subdirectory("test-to-v0")
