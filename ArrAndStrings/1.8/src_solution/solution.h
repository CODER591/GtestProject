#ifndef  SOLUTION_H
#define  SOLUTION_H

#include <iostream>
#include <vector>

class pairr {
public:
  int i;
  int j;
  pairr():i(-1),j(-1) {}

  bool is_okay() {
    return (i!=-1)&&(j!=-1);
  }
};

/*
 * Algorithm
 * 1. Find all zeroes indexes
 * 2. Iterate over matrix and replace rows and cols to zeros (where there)
 *
 */

void print_matrix(std::vector<std::vector<int> > &a) {
  for(int i=0;i<a.size();i++) {
    for(int j=0;j<a[i].size();j++) {
        std::cout<<a[i][j] <<" ";
    }
    std::cout<<std::endl;
  }
}

void zeroed_matrix(std::vector<std::vector<int> >&a) {  // O( n^2 + n^2 ) = O(n^2)
    pairr pair[a.size()*a[0].size()];
    int counter = 0;
    for(int i= 0;i< a.size();i++) {    //O(n^2)
      for(int j= 0;j<a[i].size(); j++) {
          if(a[i][j]==0){
            pair[counter].i=i;
            pair[counter].j=j;
            counter++;
          }
      }
    }
    std::vector<int> zero_row(a[0].size(),0);

    for(int k = 0;k < counter; k++) { //also should work  //O(n^2)
      if(pair[k].is_okay()){
          a[pair[k].i] = zero_row;
          for(int p=0; p< a.size();p++){
              a[p][pair[k].j]=0;
          }
      }
    }

}

#endif /* SOLUTION_H */
