include_directories(include)

add_library(hello-libretro SHARED src/libretro.cpp)

set_target_properties(hello-libretro PROPERTIES PUBLIC_HEADER include/libretro.h)

install(TARGETS hello-libretro
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

add_subdirectory(tests)
