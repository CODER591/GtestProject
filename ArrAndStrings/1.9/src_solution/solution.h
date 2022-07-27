#ifndef  SOLUTION_H
#define  SOLUTION_H

#include <iostream>
#include <string.h>
#include <string>

bool is_rotation(std::string s1,std::string s2) {
     std::string tmp_str = s1+s1;
     return (s1.size() == s2.size()) && (strstr(tmp_str.c_str(),s2.c_str()) != nullptr);
}

#endif /* SOLUTION_H */
