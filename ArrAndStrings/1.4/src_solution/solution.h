#ifndef  SOLUTION_H
#define  SOLUTION_H


#include <string>
#include <unordered_map>

#define ALPH_SIZE 128
#define SPACE_CODE 32

/*

If a string with an even length is a palindrome,
every character in the string must always occur an even number of times.
If the string with an odd length is a palindrome,
every character except one of the characters must always occur an even number of times.
Thus, in case of a palindrome,
the number of characters with odd number
of occurences can't exceed 1(1 in case of odd length and 0 in case of even length).

*/

/* Nice and simple solution
 * Count all characters
 * And according to string size we need to check whether our rule is right
 *
*/

/* ASCII has 128 chars */

bool palindrome_permutation_no_spaces_input(std::string str) { //O(128 *n)

  int counts[128] = {0};
  for(int i=0;i<128;i++) {
        for(int k=0;k<str.size();k++) {
            if(str[k] == i) {
              counts[i]+=1;
            }
        }
  }
 if(str.size() % 2 == 0) {
      for(int p=0; p < 128; p++) {
         if( counts[p] % 2 != 0 && counts[p] !=0 ) {
           return false;
         }
     }
     return true;
 } else {
   unsigned int counter = 0;
   for ( int p = 0; p < 128; p++) {
      if( counts[p] % 2 != 0 && counts[p] != 0 ) {
          counter++;
      }
   }
   return (counter>1)? false : true;
 }
  /* Not reached */
   return false;

}



bool palindrome_permutation( std::string str ) {
int char_arr [ALPH_SIZE]  = { 0 };

 unsigned int real_size = 0; //means size without spaces //lets ignore spaces.
  for(unsigned int i =0; i < str.size(); ++i) {
    if(static_cast<int>(str[i]) != SPACE_CODE) {
      ++char_arr[static_cast<int>(str[i])];
      real_size++;
    }
  }

  if(real_size % 2 == 0) { //parne
    for(int i = 0; i < ALPH_SIZE; i++) {
      if( (char_arr[i] != 0) && (char_arr[i] % 2 !=0) )
        return false;
    }
    return true;
  } else { //ne parne
    unsigned int counter_anomaly = 0;
    for(int i = 0; i < ALPH_SIZE; i++) {
      if((char_arr[i] > 0) && (char_arr[i] % 2 !=0 )){
        counter_anomaly++;
      }
    }

    return (counter_anomaly != 1) ? false : true;
  }

}
bool is_palindrome_permutation(std::string str) {
  unsigned int size_without_spaces = 0;
  std::unordered_map<char, int> symbol_q_table; //q - for quantities
  for(int i = 0; i < str.size(); ++i) {
    if (str[i] != ' ') {
      ++symbol_q_table[str[i]];
      ++size_without_spaces;
    }
  }

  unsigned int count_anomaly = 0;
  for (auto& it: symbol_q_table) {
    if (it.second %2 != 0) {
      ++count_anomaly;
    }
  }

 if (size_without_spaces %2 != 0 && count_anomaly > 1) { //ex: TENKET
   return false;
 }

 if (size_without_spaces %2 == 0 && count_anomaly > 0) { //ex: alma
   return false;
 }

 return true;
}


#endif /* SOLUTION_H */
