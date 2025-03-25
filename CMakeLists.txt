cmake_minimum_required(VERSION 3.13)

project(dde-api-proxy LANGUAGES CXX)

if (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    set(CMAKE_INSTALL_PREFIX /usr)
endif ()

set(DTK_VERSION "5" CACHE STRING "Dtk Version")

if (DTK_VERSION STREQUAL "5")
    set(QT_VERSION_MAJOR "5")
    set(EnableDtk5 on)
    set(EnableDtk6 off)
elseif(DTK_VERSION STREQUAL "6")
    set(QT_VERSION_MAJOR "6")
    set(DTK_VERSION_MAJOR "6")
    set(EnableDtk5 off)
    set(EnableDtk6 on)
else()
    message(FATAL_ERROR "Only support DTK_VERSION is 5 or 6")
endif()

macro(install_symlink filepath wantsdir)
    file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/link/${wantsdir}/)
    execute_process(COMMAND ${CMAKE_COMMAND} -E create_symlink ${CMAKE_INSTALL_PREFIX}/lib/systemd/user/${filepath} ${PROJECT_BINARY_DIR}/link/${wantsdir}/${filepath})
    install(FILES ${PROJECT_BINARY_DIR}/link/${wantsdir}/${filepath} DESTINATION lib/systemd/user/${wantsdir}/)
endmacro(install_symlink)

add_subdirectory("src")
add_subdirectory("misc")
