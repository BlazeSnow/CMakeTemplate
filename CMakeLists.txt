cmake_minimum_required(VERSION 3.31)
project(PROJECTNAME LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-static")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -static")

include_directories(/include)

add_executable(PROJECTNAME main.cpp
        src/filesystem.cpp
        include/filesystem.h
        src/chcp.cpp
        include/chcp.h)