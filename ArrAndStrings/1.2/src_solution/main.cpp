
#include "solution.h"

void test1() {
//pass
   std::string s1 = "ABC";
   std::string s2 = "BCA";
//pass
   std::string s3 = "Kabala";
   std::string s4 ="aKalab";
  //different sizes  fail
   std::string s5 = "bala";
   std::string s6 ="ada";

   std::string s7 = "BAKA";
   std::string s8 ="AKBD";

 std:: cout<< check_permutation(s1,s2) <<" "<< s1 << " "<< s2 << std::endl;
 std:: cout<< check_permutation(s3,s4) <<" "<< s3 << " "<< s4 << std::endl;
 std:: cout<< check_permutation(s5,s6) <<" "<< s5 << " " << s6 << std::endl;
 std:: cout<< check_permutation(s7,s8) <<" "<< s7 << " " << s8 << std::endl;

}

void test2() {


}

int main() {

  test1();

  return 0;
}
