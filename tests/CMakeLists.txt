cmake_minimum_required(VERSION 3.16)

add_executable(Tests tests.cpp)
target_link_libraries(Tests catch2)