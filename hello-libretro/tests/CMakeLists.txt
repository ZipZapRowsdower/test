include(GoogleTest)

add_executable(hello-libretro-test hello-libretro-test.cpp)
target_link_libraries(hello-libretro-test pthread hello-libretro gtest)
gtest_discover_tests(hello-libretro-test)
