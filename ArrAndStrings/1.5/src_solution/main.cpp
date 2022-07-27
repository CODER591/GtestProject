
#include <iostream>
#include <string>
#include "solution.h"

void test1() {
   std::cout<<"-----TEST1------"<<std::endl;
   std::string str1("Hello"); std::string str2("Hell");
   std::string str3("Kpk"); std::string str4("Kek");
   std::string str5("LOL"); std::string str6("LOL");
   std::string str7(""); std::string str8("k");
   std::cout <<str1 <<"  "<< str2 <<" Result = "<< one_away(str1,str2) << std::endl;
   std::cout <<str3 <<"  "<< str4 <<" Result = "<< one_away(str1,str2) << std::endl;
   std::cout <<str5 <<"  "<< str6 <<" Result = "<< one_away(str5,str6) << std::endl;
   std::cout <<str7 <<"  "<< str8 <<" Result = "<< one_away(str7,str8) << std::endl;

}


void test2() {
   std::cout<<"-----TEST2------"<<std::endl;

}

int main () {
 test1();
 test2();

 return 0;
}
