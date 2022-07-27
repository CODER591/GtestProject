/*
 * In this file all tests should be written
 */
#include <gtest/gtest.h>
#include "../src_solution/solution.h"

//All cases which suppose to be true on return
TEST(string_compress_new, a4b3c3) {
    ASSERT_EQ(std::string("a4b3c3"), string_compress_new(std::string("aaaabbbccc")));
}

TEST(string_compress_new, abcd) {
    ASSERT_EQ(std::string("abcd"), string_compress_new(std::string("abcd")));
}

TEST(string_compress_new, bakabaka) {
    ASSERT_EQ(std::string("bakabaka"), string_compress_new(std::string("bakabaka")));
}

TEST(string_compress_new, mmmkkkpppp) {
    ASSERT_EQ(std::string("m3k3p4"), string_compress_new(std::string("mmmkkkpppp")));
}

TEST(string_compress_new, Spaces) {
    ASSERT_EQ(std::string("m3 2k3 2p4 1"), string_compress_new(std::string("mmm  kkk  pppp ")));
}
TEST(string_compress_new, SomeWeirdASCII) {
    ASSERT_EQ(std::string(",3l3+3|3?2"), string_compress_new(std::string(",,,lll+++|||??")));
}
