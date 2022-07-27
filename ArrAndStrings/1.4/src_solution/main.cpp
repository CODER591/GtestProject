
#include <iostream>
#include <algorithm>
#include <string>
#include "solution.h"

void test1() {
   std::cout<<"-----TEST1------"<<std::endl;
   std::string str1 = "alla"; // pass
   std::string str2 = "keek"; // pass
   std::string str3 = "lolo"; // pass
   std::string str4 = "kkek"; // fail
   std::string str5 = "oll";  // pass
   std::string str6 = "tactcoa"; //pass
   std::cout<<str1<<" "<<palindrome_permutation(str1)<<std::endl;
   std::cout<<str2<<" "<<palindrome_permutation(str2)<<std::endl;
   std::cout<<str3<<" "<<palindrome_permutation(str3)<<std::endl;
   std::cout<<str4<<" "<<palindrome_permutation(str4)<<std::endl;
   std::cout<<str5<<" "<<palindrome_permutation(str5)<<std::endl;
   std::cout<<str6<<" "<<palindrome_permutation(str6)<<std::endl;

   std::cout<<"---------------"<<std::endl<< std::endl;

}

void test2() {
   std::cout<<"-----TEST2------"<<std::endl;
   std::string str1 = "appolo"; // fail
   std::string str2 = "mars"; // fail
   std::string str3 = "racecar"; // pass
   std::string str4 = "aabcc"; // pass
   std::string str5 = "aaaaaa";  //pass
   std::string str6 = "acacac"; //fail
   std::cout<<str1<<" "<<palindrome_permutation(str1)<<std::endl;
   std::cout<<str2<<" "<<palindrome_permutation(str2)<<std::endl;
   std::cout<<str3<<" "<<palindrome_permutation(str3)<<std::endl;
   std::cout<<str4<<" "<<palindrome_permutation(str4)<<std::endl;
   std::cout<<str5<<" "<<palindrome_permutation(str5)<<std::endl;
   std::cout<<str6<<" "<<palindrome_permutation(str6)<<std::endl;

   std::cout<<"---------------"<<std::endl<< std::endl;

}

int main () {

test1();
test2();
 return 0;
}
