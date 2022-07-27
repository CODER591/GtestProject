/*
 * In this file all tests should be written
 */
#include <gtest/gtest.h>
#include "../src_solution/solution.h"

/*
 *
 */

 TEST(SomeTestCaseName, transpose_test) {
   int size = 3;
   std::vector<std::vector<int> > X(size,std::vector<int>(size, 0));
   X[0][0]=1;
   X[0][1]=2;
   X[0][2]=3;

   X[1][0]=4;
   X[1][1]=5;
   X[1][2]=6;

   X[2][0]=7;
   X[2][1]=8;
   X[2][2]=9;

   transpose(X);

   std::vector<std::vector<int> > result(size,std::vector<int>(size, 0));
   result[0][0]=1;
   result[0][1]=4;
   result[0][2]=7;

   result[1][0]=2;
   result[1][1]=5;
   result[1][2]=8;

   result[2][0]=3;
   result[2][1]=6;
   result[2][2]=9;


   ASSERT_EQ (result, X);
 }

TEST(SomeTestCaseName, RotateLeft) {
  int size = 3;
  std::vector<std::vector<int> > X(size,std::vector<int>(size, 0));
  X[0][0]=1;
  X[0][1]=2;
  X[0][2]=3;

  X[1][0]=4;
  X[1][1]=5;
  X[1][2]=6;

  X[2][0]=7;
  X[2][1]=8;
  X[2][2]=9;

  rotate_matrix90degleft(X);

  std::vector<std::vector<int> > result(size,std::vector<int>(size, 0));
  result[0][0]=7;
  result[0][1]=4;
  result[0][2]=1;

  result[1][0]=8;
  result[1][1]=5;
  result[1][2]=2;

  result[2][0]=9;
  result[2][1]=6;
  result[2][2]=3;


  ASSERT_EQ (result, X);
}

TEST(SomeTestCaseName, RotateRight) {
  int size = 3;
  std::vector<std::vector<int> > X(size,std::vector<int>(size, 0));
  X[0][0]=1;
  X[0][1]=2;
  X[0][2]=3;

  X[1][0]=4;
  X[1][1]=5;
  X[1][2]=6;

  X[2][0]=7;
  X[2][1]=8;
  X[2][2]=9;

  rotate_matrix90degright(X);
  std::vector<std::vector<int> > result(size,std::vector<int>(size, 0));
  result[0][0]=3;
  result[0][1]=6;
  result[0][2]=9;

  result[1][0]=2;
  result[1][1]=5;
  result[1][2]=8;

  result[2][0]=1;
  result[2][1]=4;
  result[2][2]=7;
  ASSERT_EQ (result, X);
}
