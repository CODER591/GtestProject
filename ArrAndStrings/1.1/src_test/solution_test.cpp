/*
 * In this file all tests should be written
 */
#include <gtest/gtest.h>
#include "../src_solution/solution.h"

//All cases which suppose to be true on return
TEST(isUniqueAssigmentSort, PositiveCases) {
    ASSERT_EQ(true, is_unique(std::string("jump")));
    ASSERT_EQ(true, is_unique(std::string("anekdot")));
    ASSERT_EQ(true, is_unique(std::string("petka")));
}

//All cases which suppose to be false on return
TEST(isUniqueAssigmentSort, NegativeCases) {
    ASSERT_EQ(false, is_unique(std::string("kek")));
    ASSERT_EQ(false, is_unique(std::string("lol")));
    ASSERT_EQ(false, is_unique(std::string("pagan min")));
}


TEST(isUniqueAssigment, PositiveCases) {
    ASSERT_EQ(true, is_unique_1(std::string("jump")));
    ASSERT_EQ(true, is_unique_1(std::string("anekdot")));
    ASSERT_EQ(true, is_unique_1(std::string("petka")));
}


TEST(isUniqueAssigment, NegativeCases) {
    ASSERT_EQ(false, is_unique_1(std::string("kek")));
    ASSERT_EQ(false, is_unique_1(std::string("lol")));
    ASSERT_EQ(false, is_unique_1(std::string("pagan min")));
}


TEST(isUniqueCounting, PositiveCases) {
    ASSERT_EQ(true, is_unique2(std::string("jump")));
    ASSERT_EQ(true, is_unique2(std::string("anekdot")));
    ASSERT_EQ(true, is_unique2(std::string("petka")));
}


TEST(isUniqueCounting, NegativeCases) {
    ASSERT_EQ(false, is_unique2(std::string("kek")));
    ASSERT_EQ(false, is_unique2(std::string("lol")));
    ASSERT_EQ(false, is_unique2(std::string("pagan min")));
}