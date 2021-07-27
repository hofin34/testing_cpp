#include "../Functions.h"
#include <gtest/gtest.h>

TEST(SquareRootTest, PositiveNos) {
    ASSERT_EQ(6, Functions::squareRoot(36.0));
    ASSERT_EQ(18.0, Functions::squareRoot(324.0));
    ASSERT_EQ(25.4, Functions::squareRoot(645.16));
    ASSERT_EQ(0, Functions::squareRoot(0.0));
}

TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(-1.0, Functions::squareRoot(-15.0));
    ASSERT_EQ(-1.0, Functions::squareRoot(-0.2));
}

TEST(AddingTest, TwoPositives){
    ASSERT_EQ(6, Functions::addInt(4,2));
}

TEST(AddingTest, TwoNegatives){
    ASSERT_EQ(-2, Functions::addInt(-1, -1));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}