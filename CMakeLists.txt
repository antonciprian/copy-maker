cmake_minimum_required(VERSION 3.10.2)

project(copy-maker)

# Compiler options
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt setup
find_package(Qt5 COMPONENTS Core Qml Gui Quick REQUIRED)

set(CMAKE_AUTOMOC ON)

add_definitions(${Qt5Core_DEFINITIONS}
                ${Qt5Qml_DEFINITIONS}
                ${Qt5Gui_DEFINITIONS}
                ${Qt5Quick_DEFINITIONS})

include_directories(SYSTEM ${Qt5Core_INCLUDE_DIRS}
                           ${Qt5Qml_INCLUDE_DIRS}
                           ${Qt5Gui_INCLUDE_DIRS}
                           ${Qt5Quick_INCLUDE_DIRS})

set(QT5_LIBS ${Qt5Core_LIBRARIES}
             ${Qt5Qml_LIBRARIES}
             ${Qt5Gui_LIBRARIES}
             ${Qt5Quick_LIBRARIES})

add_subdirectory(hmi)
add_subdirectory(qml)
