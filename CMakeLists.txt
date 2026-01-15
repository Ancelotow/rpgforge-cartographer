cmake_minimum_required(VERSION 3.16)
project(Cartographer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_PREFIX_PATH "/opt/homebrew/opt/qt")

find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(SOURCES
        main.cpp
        presentation/ui/mainwindow/mainwindow.cpp
        presentation/ui/mainwindow/mainwindow.hpp
        presentation/ui/map/mapcanvasview.cpp
        presentation/ui/map/mapcanvasview.hpp
        presentation/ui/map/mapviewmodel.hpp
)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(Cartographer ${SOURCES})

target_link_libraries(Cartographer Qt6::Widgets)
