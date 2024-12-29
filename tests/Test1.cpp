#include "gtest/gtest.h"

// A sample function to test
int add(int a, int b) {
    return a + b;
}

// Test cases
TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(add(1, 1), 2);
}

TEST(AdditionTest, NegativeNumbers) {
    EXPECT_EQ(add(-1, -1), -2);
}
