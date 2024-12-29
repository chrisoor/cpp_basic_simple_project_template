#include "gtest/gtest.h"
#include "ExampleLib2/ExampleLib2.hpp"
#include "ExampleLib1/mocks/ExampleLib1_Mock.hpp"

using ::testing::Return;

// Test cases
TEST(ExampleLib2_Tests, Multiply1) {
    ExampleClass1Mock classObj1Mock;
    ExampleClass2 classObj2{&classObj1Mock};
    EXPECT_CALL(classObj1Mock, Add(1, 0)).Times(1).WillOnce(Return(1));
    EXPECT_EQ(classObj2.Multiply(1, 1), 1);
}

TEST(ExampleLib2_Tests, Multiply2) {
    ExampleClass1 classObj1;
    ExampleClass2 classObj2{&classObj1};
    EXPECT_EQ(classObj2.Multiply(4, 5), 20);
}
