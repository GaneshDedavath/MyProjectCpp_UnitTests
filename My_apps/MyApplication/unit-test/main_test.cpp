#include <gtest/gtest.h>
#include "../Impl/include/main_test.h"



/* 
Basic Unit Tests for the Test_sum function.
These tests cover various scenarios including:
*/
TEST(SumTest, PositiveNumbers) {
    EXPECT_EQ(Test_sum(2, 3), 5);
}

TEST(SumTest, NegativeNumbers) {
    EXPECT_EQ(Test_sum(-2, -3), -5);
}

TEST(SumTest, MixedSignNumbers) {
    EXPECT_EQ(Test_sum(-2, 3), 3);
}

TEST(SumTest, Zero) {
    EXPECT_EQ(Test_sum(0, 0), 0);
}

TEST(HelloTest, HWtest){
    EXPECT_EQ(hello_w("Hello ", "World!"), "Hello World!");
}
/*
Tests for Class Member Functions
These tests cover the member functions of the AritheMeticClass and Complex class.
*/


int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}