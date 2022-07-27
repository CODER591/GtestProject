/*
 * In this file all tests should be written
 */
#include <gtest/gtest.h>
#include "../src_solution/solution.h"

//All cases which suppose to be true on return
TEST(URLifyStringCustom, PositiveCases) {
    ASSERT_EQ(std::string("Mr%20John"), URLify_string_custom(std::string("Mr John"),7));
    ASSERT_EQ(std::string("Mr%20John%20Smith"), URLify_string_custom(std::string("Mr John Smith"),13));
    ASSERT_EQ(std::string("Mr%20John%20Smith"), URLify_string_custom(std::string("Mr John Smith       "),13));
    ASSERT_EQ(std::string("Mr%20%20John%20Smith"), URLify_string_custom(std::string("Mr  John Smith     "),14));
}

//All cases which suppose to be false on return
TEST(URLifyStringCustom, NegativeCases) {
    //ASSERT_EQ(false,is_unique(std::string("kek")));
}

TEST(URLifyStringManipul, PositiveCases) {
  ASSERT_EQ(std::string("Mr%20John"), URLify_string_manipul(std::string("Mr John"),7));
  ASSERT_EQ(std::string("Mr%20John%20Smith"), URLify_string_manipul(std::string("Mr John Smith"),13));
  ASSERT_EQ(std::string("Mr%20John%20Smith"), URLify_string_manipul(std::string("Mr John Smith       "),13));
  ASSERT_EQ(std::string("Mr%20%20John%20Smith"), URLify_string_manipul(std::string("Mr  John Smith     "),14));
}

TEST(URLifyWithStd, PositiveCases) {
  ASSERT_EQ(std::string("Mr%20John"),URLifyWithStd(std::string("Mr John"),7));
  ASSERT_EQ(std::string("Mr%20John%20Smith"), URLifyWithStd(std::string("Mr John Smith"),13));
  ASSERT_EQ(std::string("Mr%20John%20Smith"), URLifyWithStd(std::string("Mr John Smith       "),13));
  ASSERT_EQ(std::string("Mr%20%20John%20Smith"), URLifyWithStd(std::string("Mr  John Smith     "),14));
}
