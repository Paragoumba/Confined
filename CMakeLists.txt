cmake_minimum_required(VERSION 3.16)
project(Confined)

set(CMAKE_CXX_STANDARD 20)

add_executable(Confined main.cpp engine/Window.cpp engine/GlfwWindow.cpp engine/Logger.cpp)