cmake_minimum_required(VERSION 3.16)

add_executable(Halloween
        main.cpp
        Game.cpp)

target_link_libraries(Halloween RAMENgine)