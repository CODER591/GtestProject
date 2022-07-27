/*
 * In this file all tests should be written
 */
#include <gtest/gtest.h>
#include "../src_solution/solution.h"

//All cases which suppose to be true on return
TEST(SomeTestCaseName, PositiveCases) {
    ASSERT_EQ(true,one_away_new(std::string("pale"),std::string("ple")));
    ASSERT_EQ(true,one_away_new(std::string("cake"),std::string("bake")));
    ASSERT_EQ(true,one_away_new(std::string("cake"),std::string("ake")));
}

//All cases which suppose to be false on return
TEST(SomeTestCaseName, NegativeCases) {
    ASSERT_EQ(false,one_away_new(std::string("bale"),std::string("ple")));
}
