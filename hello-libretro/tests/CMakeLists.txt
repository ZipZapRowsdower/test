add_executable(hello-libretro-test hello-libretro-test.cpp)
target_link_libraries(hello-libretro-test ${GTEST_LIBRARIES} pthread hello-libretro)
gtest_discover_tests(hello-libretro-test)
