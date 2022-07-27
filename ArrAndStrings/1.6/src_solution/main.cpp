
#include <iostream>
#include <string>
#include <sstream>

#include "solution.h"

void test1() {
   std::cout<<"-----TEST1------"<<std::endl;
   std::string str1="aaabbbbcccc";
   string_compress(str1);
   std::string str2="a";
   string_compress(str2);
   std::string str3="SuuuuuuuuuuuuuKaaaaaaaaa";
   string_compress(str3);
   std::string str4="AaaaaaaaaaaaaaAAAAAA";
   string_compress(str4);
}

void test2() {
   std::cout<<"-----TEST2------"<<std::endl;

}

int main () {

  test1();
  return 0;
}
