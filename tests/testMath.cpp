
#include <gtest/gtest.h>
#include "mathUtils.h"

TEST(MathTest, AdditionTest) {
    EXPECT_EQ(add(2, 3), 10);
}

TEST(MathTest, SubtractionTest) {
    EXPECT_EQ(subtract(10, 4), 6);
}