#ifndef  SOLUTION_H
#define  SOLUTION_H

#include <iostream>
#include <string>
#include <array>
#include <algorithm>

bool is_unique_1(std::string  str) {   //O(n*n)

    for(int i=0;i<str.size();i++) {
      for(int j=0;j<str.size();j++) {
           if(i==j) {
               continue;
           }
           if(str[i]==str[j]) {
                return false;
            }
      }
    }
    return true;
}

bool is_unique(std::string  str)  { // O(sorting) + O (N)

//Do we need to add there conversion of
//all letters to uppercase or to lower case ?

  std::sort(str.begin(),str.end());
  for(int i=0;i<str.size()-1;i++) {
     if(str[i]==str[i+1]) { return false; }
  }
  return true;
}


#define UTF_8_SIZE 128
//assuming UTF-8 (128 distinct chars)

bool is_unique2(std::string str) { // O(n) + O(128)
  unsigned int arr_count [UTF_8_SIZE] = {0};
  for(size_t i = 0; i < str.size(); ++i) {
    int symbol_ASCII_code = static_cast<unsigned int>(str[i]);
    ++arr_count[symbol_ASCII_code];
  }

  for(size_t i = 0; i < UTF_8_SIZE; ++i) {
   if (arr_count[i] > 1) {
     return false;
   }
  }
  return true;
}

#endif /* SOLUTION_H */
