/*
 * This file is exists only for running tests.
 * So, I think there should be no intent in changing it.
 */

#include <gtest/gtest.h>

#include "solution_test.cpp"

int main(int argc, char * argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
