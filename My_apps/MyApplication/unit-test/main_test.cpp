#include "main_test.h"

int Test_sum(int a, int b){
    return a+b;
}

string hello_w(string c,string  d){
    return c+d;
}



TEST(SumTest, PositiveNumbers) {
    EXPECT_EQ(Test_sum(2, 3), 5);
}

TEST(SumTest, NegativeNumbers) {
    EXPECT_EQ(Test_sum(-2, -3), -5);
}

TEST(SumTest, MixedSignNumbers) {
    EXPECT_EQ(Test_sum(-2, 3), 1);
}

TEST(SumTest, Zero) {
    EXPECT_EQ(Test_sum(0, 0), 0);
}

TEST(HelloTest, HWtest){
    EXPECT_EQ(hello_w("Hello ", "World!"), "Hello World!");
}


int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}