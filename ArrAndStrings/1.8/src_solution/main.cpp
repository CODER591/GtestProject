
#include <iostream>
#include <vector>

#include "solution.h"


void test1() {
   std::cout<<"-----TEST1------"<<std::endl;
   int size =3;
   std::vector<std::vector<int> >X(size, std::vector<int>(size,0));
    //X[0][0]=1; //size 1

  /*X[0][0]=1;   //size 2
    X[0][1]=2;

    X[1][0]=3;
    X[1][1]=4;*/

  /* X[0][0]=1;  size 3
   X[0][1]=2;
   X[0][2]=3;

   X[1][0]=4;
   X[1][1]=5;
   X[1][2]=6;

   X[2][0]=7;
   X[2][1]=8;
   X[2][2]=9;*/

    X[0][0]=1; //size 3
    X[0][1]=2;
    X[0][2]=3;

    X[1][0]=4;
    X[1][1]=5;
    X[1][2]=0;

    X[2][0]=7;
    X[2][1]=8;
    X[2][2]=9;

   std::cout<<"Input:"<<std::endl;
   print_matrix(X);
   zeroed_matrix(X);
   std::cout<<"------------------"<<std::endl;
   std::cout<<"Output:"<<std::endl;
   print_matrix(X);
}

void test2() {
   std::cout<<"-----TEST2------"<<std::endl;
   /*
   int size =3;
   std::vector<std::vector<int> >X(size, std::vector<int>(size,0));

   X[0][0]=1;
   X[0][1]=2;
   X[0][2]=3;

   X[1][0]=4;
   X[1][1]=5;
   X[1][2]=0;

   X[2][0]=7;
   X[2][1]=8;
   X[2][2]=9;

   std::cout<<"Input:"<<std::endl;
   print_matrix(X);
   zeroed_matrix(X);
   std::cout<<"------------------"<<std::endl;
   std::cout<<"Output:"<<std::endl;
   print_matrix(X);
   */

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

   if(X == result) { std::cout<<"AAAAAAAAAAAA"<<std::endl;}

}

int main () {
  test1();
  test2();

 return 0;
}
