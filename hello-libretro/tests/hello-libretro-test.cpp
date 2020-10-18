#include "gtest/gtest.h"

TEST (MyFirstTests, WillPass) {
    EXPECT_EQ (true, true);
}

TEST (MyFirstTests, WillFail) {
    EXPECT_EQ (true, false);
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

