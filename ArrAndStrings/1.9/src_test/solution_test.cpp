/*
 * In this file all tests should be written
 */
#include <gtest/gtest.h>
#include "../src_solution/solution.h"

// waterbottlewaterbottle
//   [erbottlewat]
TEST(IsRotation, waterbottle) {
    ASSERT_EQ(true, is_rotation(std::string("waterbottle"),std::string("erbottlewat")));
    ASSERT_EQ(true, is_rotation(std::string("erbottlewat"),std::string("waterbottle")));
}
