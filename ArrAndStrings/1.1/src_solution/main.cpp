

#include <iostream>
#include <string>
#include <algorithm>

#include "solution.h"


void test1() {

  std::  cout<<"-------TEST1-------\n";
  std:: string str1= "kek"; //fail
  std:: string str2= "jump"; //pass
  std:: string str3 = "lol";     //fail
  std:: string str4 = "pagan min"; //fail
  std:: string str5 = "anekdot"; //pass
  std:: string str6 = "petka"; //pass
  std::cout<< is_unique(str1) <<" "<<str1<<std::endl;
  std::cout<< is_unique(str2) <<" "<<str2<<std::endl;
  std::cout<< is_unique(str3) <<" "<<str3<<std::endl;
  std::cout<< is_unique(str4) <<" "<<str4<<std::endl;
  std::cout<< is_unique(str5) <<" "<<str5<<std::endl;
  std::cout<< is_unique(str6) <<" "<<str6<<std::endl;
}

void test2() {

  std:: cout<<"-------TEST2-------\n";
  std:: string str1 = "kek"; //fail
  std:: string str2 = "jump"; //pass
  std:: string str3 = "lol";    //fail
  std:: string str4 = "pagan min"; //fail
  std:: string str5 = "anekdot"; //pass
  std:: string str6 = "petka";  //pass

  std::cout<< is_unique_1(str1) <<" "<<str1<<std::endl;
  std::cout<< is_unique_1(str2) <<" "<<str2<<std::endl;
  std::cout<< is_unique_1(str3) <<" "<<str3<<std::endl;
  std::cout<< is_unique_1(str4) <<" "<<str4<<std::endl;
  std::cout<< is_unique_1(str5) <<" "<<str5<<std::endl;
  std::cout<< is_unique_1(str6) <<" "<<str6<<std::endl;
}

void test3() {

  std:: cout<<"-------TEST3-------\n";
  std:: string str1 = "kek"; //fail
  std:: string str2 = "jump"; //pass
  std:: string str3 = "lol";    //fail
  std:: string str4 = "pagan min"; //fail
  std:: string str5 = "anekdot"; //pass
  std:: string str6 = "petka";  //pass

  std::cout<< is_unique2(str1) <<" "<<str1<<std::endl;
  std::cout<< is_unique2(str2) <<" "<<str2<<std::endl;
  std::cout<< is_unique2(str3) <<" "<<str3<<std::endl;
  std::cout<< is_unique2(str4) <<" "<<str4<<std::endl;
  std::cout<< is_unique2(str5) <<" "<<str5<<std::endl;
  std::cout<< is_unique2(str6) <<" "<<str6<<std::endl;
}

int main() {

  test1();
  test2();
  test3();

  return 0;
}
