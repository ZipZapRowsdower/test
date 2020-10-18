cmake_minimum_required(VERSION 3.10)
project(hello-libretro 
        VERSION 0.0.1
        DESCRIPTION "Example libretro core"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(googletest)
include_directories(googletest/googletest/include/)
enable_testing()

add_subdirectory(hello-libretro)
