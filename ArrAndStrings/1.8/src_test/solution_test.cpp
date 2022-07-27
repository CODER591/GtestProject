/*
 * In this file all tests should be written
 */
#include <gtest/gtest.h>
#include "../src_solution/solution.h"

TEST(ZeroedMatrix, SizeEQ1Dumb) {
  int size = 1;
  std::vector<std::vector<int> > X(size, std::vector<int>(size, 0));
   X[0][0] = 1;
  std::vector<std::vector<int> > result(size, std::vector<int>(size, 1));
  zeroed_matrix(X);

  ASSERT_EQ(result, X);
}

TEST(ZeroedMatrix, SizeEQ2) {
  int size = 2;                    //size/2 ==1
  std::vector<std::vector<int> > X(size/2, std::vector<int>(size, 0));

  X[0][0] = 1;   //size 2
  X[0][1] = 0;

  std::vector<std::vector<int> > result(size/2, std::vector<int>(size, 0));
  zeroed_matrix(X); // X before { {1,0} } //X after { {0,0} }
  ASSERT_EQ(result, X);
}

TEST(ZeroedMatrix, SizeEQ_2To2) {
  int size = 2;                    //size/2 ==1
  std::vector<std::vector<int> > X(size, std::vector<int>(size, 0));
  X[0][0] = 1;   //size 2*2
  X[0][1] = 2;
  X[1][0] = 0; //replacing the 3 -> 0
  X[1][1] = 4;
  zeroed_matrix(X); // Everything exept 4 will be a zero.
  std::vector<std::vector<int> > result(size, std::vector<int>(size, 0));

  result[0][0] = 0;   //size 2
  result[0][1] = 2;
  result[1][0] = 0; //replacing the 3 -> 0
  result[1][1] = 0;

  ASSERT_EQ(result, X);
}

/* X[0][0]=1;  size 3
 X[0][1]=2;
 X[0][2]=3;

 X[1][0]=4;
 X[1][1]=5;
 X[1][2]=6;

 X[2][0]=7;
 X[2][1]=8;
 X[2][2]=9;*/



TEST(SomeTestCaseName, SizeEQ_3To3) {
   int size = 3;
   std::vector<std::vector<int> > X(size, std::vector<int>(size, 0));

    X[0][0]=1;
    X[0][1]=2;
    X[0][2]=3;

    X[1][0]=4;
    X[1][1]=5;
    X[1][2]=0;

    X[2][0]=7;
    X[2][1]=8;
    X[2][2]=9;
   zeroed_matrix(X);

   std::vector<std::vector<int> > result(size, std::vector<int>(size, 1));

   result[0][0]=1;
   result[0][1]=2;
   result[0][2]=0;

   result[1][0]=0;
   result[1][1]=0;
   result[1][2]=0;

   result[2][0]=7;
   result[2][1]=8;
   result[2][2]=0;

   ASSERT_EQ(result,X);
}

TEST(SomeTestCaseName, SizeEQ_3To3_Case_2) {
   int size = 3;
   std::vector<std::vector<int> > X(size, std::vector<int>(size, 0));

    X[0][0]=1;
    X[0][1]=0;
    X[0][2]=3;

    X[1][0]=4;
    X[1][1]=5;
    X[1][2]=0;

    X[2][0]=7;
    X[2][1]=8;
    X[2][2]=9;
   zeroed_matrix(X);

   std::vector<std::vector<int> > result(size, std::vector<int>(size, 0));

   result[0][0]=0;
   result[0][1]=0;
   result[0][2]=0;

   result[1][0]=0;
   result[1][1]=0;
   result[1][2]=0;

   result[2][0]=7;
   result[2][1]=0;
   result[2][2]=0;

   ASSERT_EQ(result,X);
}
