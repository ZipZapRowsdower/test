cmake_minimum_required(VERSION 3.10)
project(hello-libretro 
        VERSION 0.0.1
        DESCRIPTION "Example libretro core"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

enable_testing()
include(GoogleTest)
add_subdirectory(googletest)

add_subdirectory(hello-libretro)
