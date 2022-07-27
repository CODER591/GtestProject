#ifndef  SOLUTION_H
#define  SOLUTION_H


#include <iostream>
#include <string>
#include <algorithm>

bool check_permutation (std::string str1, std::string str2) { // (sorting O(n) + O(n)) + O(n)

/* if they are same size they could be permuted */
  if (str1.size() != str2.size()) {
    return false;
  }

/* lets make them to one order */
  std::sort(str1.begin(),str1.end());
  std::sort(str2.begin(),str2.end());
  for(int i=0;i < str1.size();i++) {
      if (str1[i] != str2[i]) {
          return false;
      }
  }
    return true;
}


/*
 * Lets assume that we have the UTF-8 encoding, so there 128 symbols
 */
#define ENCODING_CHARS_COUNT 128

bool check_permutation_counting (std::string str1, std::string str2) {

/* if they are same size they could be permuted */
  if (str1.size() != str2.size()) {
    return false;
  }

  int string1_symbols_count_array[ENCODING_CHARS_COUNT] = {0};
  int string2_symbols_count_array[ENCODING_CHARS_COUNT] = {0};

  /*
   * For each string we calculating the counts of each symbol
   * and after that we simply compare this counts.
   */
  for(unsigned i = 0; i < str1.size(); i++) {
    string1_symbols_count_array[ static_cast<int>(str1[i]) ] ++;
  }
  for(unsigned j = 0; j < str1.size(); j++) {
    string2_symbols_count_array[ static_cast<int>(str2[j]) ] ++;
  }

  for(unsigned k = 0; k < ENCODING_CHARS_COUNT; k++) {
    if (string1_symbols_count_array[k] != string2_symbols_count_array[k]) {
      return false;
    }
  }
  return true;
}

#endif /* SOLUTION_H */
