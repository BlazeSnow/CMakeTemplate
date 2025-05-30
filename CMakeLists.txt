cmake_minimum_required(VERSION 3.31)
project(PROJECTNAME LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (NOT APPLE)
    set(CMAKE_CXX_FLAGS "-static")
endif ()

include_directories(/include)

add_executable(PROJECTNAME main.cpp
        src/filesystem.cpp
        include/filesystem.h
        src/chcp.cpp
        include/chcp.h
        src/cin_ignore.cpp
        include/cin_ignore.h)