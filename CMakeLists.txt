cmake_minimum_required(VERSION 3.10)
project(Zaphod_master)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(Zaphod_master
        Colour.cpp
        Colour.h
        scene.cpp
        scene.h
        Vec.cpp
        Vec.h)
