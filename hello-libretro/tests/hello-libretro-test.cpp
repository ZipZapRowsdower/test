#include "libretro.h"

#include "gtest/gtest.h"

TEST (RetroInit, Exists) {
    retro_init();
}

TEST (RetroDeinit, Exists) {
    retro_deinit();
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

