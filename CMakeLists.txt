cmake_minimum_required(VERSION 3.16)
project(Halloween)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory("${PROJECT_SOURCE_DIR}/game")
add_subdirectory("${PROJECT_SOURCE_DIR}/libs")
add_subdirectory("${PROJECT_SOURCE_DIR}/tests")