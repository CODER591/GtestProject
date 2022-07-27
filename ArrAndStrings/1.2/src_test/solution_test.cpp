/*
 * In this file all tests should be written
 */
#include <gtest/gtest.h>
#include "../src_solution/solution.h"

/* Test local includes */
#include <random>

//This should be used for random permutation ( random_shuffle is deprecated starting from c++14)
std::string&& custom_random_shuffle (std::string & str) {
  unsigned int seed = 42;
  std::shuffle(str.begin(), str.end(), std::default_random_engine(seed));
  return std::move(str);
}


//All cases which suppose to be true on return
TEST(CheckPermutationSort, PositiveCases) {
    std::string s1 = "ABCDSRGKL";
    std::string s2 = "JIMMYYY";
    std::string s3 = "JERONIMOOOO";
    std::string s4 = "some small text";
    std::string s5 = "Nice Ass baby";
    std::string s6 = "When you starring on the darkness, expect same from her.";

    //ASSERT_EQ(true, check_permutation(s1, s1));
    ASSERT_EQ(true, check_permutation(s1, custom_random_shuffle(s1)));
    ASSERT_EQ(true, check_permutation(s2, custom_random_shuffle(s2)));
    ASSERT_EQ(true, check_permutation(s3, custom_random_shuffle(s3)));
    ASSERT_EQ(true, check_permutation(s4, custom_random_shuffle(s4)));
    ASSERT_EQ(true, check_permutation(s5, custom_random_shuffle(s5)));
    ASSERT_EQ(true, check_permutation(s6, custom_random_shuffle(s6)));
}

//All cases which suppose to be false on return
TEST(CheckPermutationSort, NegativeCases) {

    std::string s1 = "ABCDSRGKL";
    std::string s2 = "JIMMYYY";
    std::string s3 = "JERONIMOOOO";
    std::string s4 = "some small text";
    std::string s5 = "Nice Ass baby";
    std::string s6 = "When you starring on the darkness, expect same from her.";

    ASSERT_EQ(false, check_permutation(std::string("Aaaaaaaaaaaaa"),std::string("Failed size")));
    ASSERT_EQ(false, check_permutation(s2, s4));
    ASSERT_EQ(false, check_permutation(s3, s4));
    ASSERT_EQ(false, check_permutation(s1, s4));
    ASSERT_EQ(false, check_permutation(s5, s6));
}


TEST(CheckPermutationCounting, PositiveCases) {
    std::string s1 = "ABCDSRGKL";
    std::string s2 = "JIMMYYY";
    std::string s3 = "JERONIMOOOO";
    std::string s4 = "acaaacac";
    std::string s5 = "Nice Ass baby";
    std::string s6 = "When you starring on the darkness, expect same from her.";
    ASSERT_EQ(true, check_permutation_counting(s1, custom_random_shuffle(s1)));
    ASSERT_EQ(true, check_permutation_counting(s2, custom_random_shuffle(s2)));
    ASSERT_EQ(true, check_permutation_counting(s3, custom_random_shuffle(s3)));
    ASSERT_EQ(true, check_permutation_counting(s4, custom_random_shuffle(s4)));
    ASSERT_EQ(true, check_permutation_counting(s5, custom_random_shuffle(s5)));
    ASSERT_EQ(true, check_permutation_counting(s6, custom_random_shuffle(s6)));
}

TEST(CheckPermutationCounting, NegativeCases) {

    std::string s1 = "ABCDSRGKL";
    std::string s2 = "JIMMYYY";
    std::string s3 = "JERONIMOOOO";
    std::string s4 = "some small text";
    std::string s5 = "Nice Ass baby";
    std::string s6 = "When you starring on the darkness, expect same from her.";

    ASSERT_EQ(false, check_permutation_counting(std::string("Aaaaaaaaaaaaa"),std::string("Failed size")));
    ASSERT_EQ(false, check_permutation_counting(s2, s4));
    ASSERT_EQ(false, check_permutation_counting(s3, s4));
    ASSERT_EQ(false, check_permutation_counting(s1, s4));
    ASSERT_EQ(false, check_permutation_counting(s5, s6));
}
