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
        presentation/ui/shared/customwindow.cpp
        presentation/ui/shared/customwindow.hpp
        domain/entities/draw/point.hpp
        domain/entities/environment.hpp
        domain/entities/draw/color.hpp
        domain/entities/draw/trace.hpp
)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(Cartographer ${SOURCES})

target_link_libraries(Cartographer Qt6::Widgets)
