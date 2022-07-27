
#include "solution.h"


void test1() {
   std::cout<<"-----TEST1------"<<std::endl;
   int size = 3;
   std::vector<std::vector<int> > X(size,std::vector<int>(size, 0));
   std::cout<<"Input:"<<std::endl;
   X[0][0]=1;
   X[0][1]=2;
   X[0][2]=3;

   X[1][0]=4;
   X[1][1]=5;
   X[1][2]=6;

   X[2][0]=7;
   X[2][1]=8;
   X[2][2]=9;
  print_matrix(X);
  rotate_matrix90degleft(X);
  std::cout<<"------------------"<<std::endl;
  std::cout<<"Output:"<<std::endl;
  print_matrix(X);

}

void test2() {
   std::cout<<"-----TEST2------"<<std::endl;
   int size = 3;
   std::vector<std::vector<int> > X(size,std::vector<int>(size, 0));
   std::cout<<"Input:"<<std::endl;
   X[0][0]=1;
   X[0][1]=2;
   X[0][2]=3;

   X[1][0]=4;
   X[1][1]=5;
   X[1][2]=6;

   X[2][0]=7;
   X[2][1]=8;
   X[2][2]=9;
  print_matrix(X);
  rotate_matrix90degright(X);
  std::cout<<"------------------"<<std::endl;
  std::cout<<"Output:"<<std::endl;
  print_matrix(X);

}

int main () {

  test1();
  test2();

  return 0;
}
