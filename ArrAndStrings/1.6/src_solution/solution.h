#ifndef  SOLUTION_H
#define  SOLUTION_H

#include <utility>
#include <vector>
#include <string>

std::string string_compress_new(std::string str) {
  unsigned int counter = 0;
  std::vector < std::pair <char, unsigned int> > compress_vec;
  for(int i=0; i < str.size(); i++) {

    if(str[i]!= str[i+1]) {
      auto c_pair = std::make_pair(str[i], counter);
      compress_vec.push_back(c_pair);
      counter = 0;
    }
    counter++;
  }
  std::string new_str;
  for(int i=0; i < compress_vec.size(); i++) {
    new_str += compress_vec[i].first;
    new_str += std::to_string(compress_vec[i].second);
  }

  return new_str.size() >str.size()? str : new_str;
}

void string_compress(std::string str) {

    std::string compressed;
    int last_bad_index = 0;
    int first_bad_index = 0;
    for (int i = 0 ; i < str.size(); i++) {
        if( str[i] != str[i+1] ) {  //null terminated character at the end; because of str[str.size()] == '\0'
            first_bad_index = i + 1;
            compressed += str[i];
            compressed += std::to_string(first_bad_index - last_bad_index);
            last_bad_index = first_bad_index;
        }
    }
    std::cout<<"Original= " << str <<"   Compressed= "<<compressed<<std::endl;
}

#endif /* SOLUTION_H */
