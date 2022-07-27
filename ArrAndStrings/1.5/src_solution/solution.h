#ifndef  SOLUTION_H
#define  SOLUTION_H

#include <string>
#include <cmath> //for abs


//considering str1 > str2
bool one_away_new(std::string str1 , std::string str2 ) {

   if( str1.size() == str2.size() ) {
    if(str1 == str2) { return false; }
    int diff_cnt = 0;
    for(int i=0; i < str1.size(); i++) {
      if(str1[i] != str2[i]) {
        diff_cnt++;
      }
    }
    return diff_cnt == 1 ? true : false;

   } else if( ( abs( (int)str1.size() - (int)str2.size()) == 1 ) && str1.size() > 0 && str2.size() > 0) {
     int i=0;
     int j=0;
     int limiter=0;
     if(str1[0]!=str2[0]) { //special case
       i++;
       limiter++;
     }
     int larger_size = std::max(str1.size(),str2.size());
     while (i < larger_size) {
       if(str1[i]!=str2[j]) {
         limiter++;
         i++;
       }
       j++;
       i++;
     }
     return limiter == 1 ? true : false;
   } else { return false; }
}

/* We need try to determine what happened with strings
 * types of actions insert, remove, replace a character.
 * need to check if they are one edit
 *
 */

bool one_away (std::string first, std::string second) {

    int len1 = first.size();
    int len2 = second.size();

    if ( len1 == len2 ) {
      for( int i = 0; i < len2; i++ ) {
         if(first[i] == second[i]) { return false; }
      }
    }

    if ((len1 - len2) > 1 || (len2 - len1) > 1  ) {
        return false;
    }
    int i = 0;
    int j = 0;
    int diff = 0;
    while (i<len1 && j<len2) {
        char f = first[i];
        char s = second[j];
        if (f != s) {
            diff++;
            if (len1 > len2)
                i++;
            if (len2 > len1)
                j++;
            if (len1 == len2)
                i++; j++;
        }
        else{
            i++; j++;
        }
        if (diff > 1) {
            return false;
        }
    }
    // If the length of the string is not same. ex. "abc" and "abde" are not one edit distance.
    if (diff == 1 && len1 != len2 && (i != len1 || j != len2)) {
        return false;
    }
    return true;
}


#endif /* SOLUTION_H */
