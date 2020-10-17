add_library(hello-libretro SHARED src/libretro.cpp)

target_include_directories(hello-libretro PRIVATE include)

set_target_properties(hello-libretro PROPERTIES PUBLIC_HEADER include/libretro.h)

install(TARGETS hello-libretro
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

add_subdirectory(tests)
