#include "libretro.h"

#include "gtest/gtest.h"

TEST (RetroInit, Exists) {
    retro_init();
}

TEST (RetroDeinit, Exists) {
    retro_deinit();
}

TEST (RetroApiVersion, ReturnsPublicAPIVersion) {
    unsigned version;
    version = retro_api_version();
    EXPECT_EQ (version, RETRO_API_VERSION);
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

