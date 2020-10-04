cmake_minimum_required(VERSION 3.16)

add_library(Engine
        Engine.cpp
        Logger.cpp
        GlfwWindow.cpp
        Window.cpp
        exceptions/Exception.cpp
        exceptions/WindowException.cpp)

target_include_directories(Engine PUBLIC .)
target_link_libraries(Engine GLAD glfw GL)