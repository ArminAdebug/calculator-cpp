cmake_minimum_required(VERSION 3.20)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

project(calculator LANGUAGES C CXX)
project(calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)


qt_add_executable(calculator
    main.cpp
    ui/window.ui
)

target_link_libraries(calculator PRIVATE Qt6::Widgets)

add_custom_command(TARGET calculator POST_BUILD
    COMMAND "F:\\vcpkg\\vcpkg\\installed\\x64-windows\\tools\\Qt6\\bin\\windeployqt.exe"
            "$<TARGET_FILE:calculator>")
