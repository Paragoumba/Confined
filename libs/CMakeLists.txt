cmake_minimum_required(VERSION 3.16)

include(FetchContent)

FetchContent_Populate(
        RAMENgine
        GIT_REPOSITORY  https://github.com/Paragoumba/RAMENgine.git
        GIT_TAG         origin/master
        SOURCE_DIR      ${PROJECT_SOURCE_DIR}/libs/RAMENgine
)

add_subdirectory(${ramengine_SOURCE_DIR} ${ramengine_BINARY_DIR})