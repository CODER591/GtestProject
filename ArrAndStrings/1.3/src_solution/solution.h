#ifndef  SOLUTION_H
#define  SOLUTION_H

#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

//number is a real size( without counting possible spaces at the end)
std::string URLify_string_custom(std::string str, int real_size) { // O(real_size)

  int spaces_count = 0;
  for(int i = 0;i < real_size; i++) {
    if(str[i] == ' ')
        spaces_count++;
  }

  std::string new_string(real_size + spaces_count * 2, 42);

  int j=0;
  for(int i = 0; i < real_size; i++) {
    if (str[i] ==' ') {
      /*
        could be generalized as internal cycle through string to insert
        for(const auto& character : string_to_insert) {
           new_string[j] = character;
           j+=string_to_insert.size()-1;
        }
      */
      new_string[j]='%';
      new_string[j+1]='2';
      new_string[j+2]='0';
      j += 2;
    } else {
      new_string[j] = str[i];
    }
    j++;
  }
  return new_string;
}

//true_length not real length

/* The main issue that we have 3 symbols to insert(%20) instead of one space */

std::string URLify_string_manipul(std::string str, unsigned int  true_length) { //

    if (true_length > str.size())
        return std::move(str);

    /* Let*s remove this useless spaces after text */
    str.std::string::resize(true_length); //up to O(n)
    std::vector<int> v;
    for(int i = 0; i < str.size(); i++) {  // O(n)
       if (str[i] == ' ') {
         v.push_back(i);  //amortized O(1)
       }
    }
    std::string stub =  "%20";
    std::string new_string;
    new_string += str.substr(0,v[0]);  //up to O (k) k new string length
    for(int i = 0; i < v.size(); i++) {  //O(n)
      new_string += stub;
      new_string += str.substr(v[i]+1,v[i+1]-v[i]-1);/* -1 to get real word size without space after*/  // O(k)
    }
    return std::move(new_string);

    /* Final complexity is
     * O(n)+ O(n) +O(k) + O(n)* O(k)
     */
}


std::string URLifyWithStd(std::string input, unsigned int  true_length) {
  input.resize(true_length);
  std::string stub = "%20";
  for(int i = 0; i < input.length(); i++) {
      if (input[i] == ' ')
          input.replace(i, 1, stub);
  }
  return std::move(input);
}

//also there is a way
//split string by spaces to array, and merge it with %20

#endif /* end of include guard:  SOLUTION_H */
