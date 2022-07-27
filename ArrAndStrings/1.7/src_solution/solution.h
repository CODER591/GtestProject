#ifndef  SOLUTION_H
#define  SOLUTION_H


#include <iostream>
#include <vector>

/*
 * The most optimal way to represent matrix as an linear array
 * int arr* = new int [N*M];
 * matrix[i][j] = array[ i*m + j ]
 * N (rows) by M (columns)
 */

void print_matrix(std::vector<std::vector<int> > &a) {
  for(int i=0;i<a.size();i++) {
    for(int j=0;j<a[i].size();j++) {
        std::cout<<a[i][j] <<" ";
    }
    std::cout<<std::endl;
  }
}

void transpose(std::vector<std::vector<int> > &b) {
    if (b.size() == 0)
        return;

    std::vector<std::vector<int> > trans_vec(b[0].size(), std::vector<int>());
    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < b[i].size(); j++) {
            trans_vec[j].push_back(b[i][j]);
        }
    }
    b = trans_vec;
}


// to rotate_matrix on 90 degrees to left (anticlock vize)
// 1) transpose
// 2) reverse all collumns
/* Example:


Input:         transposition
1  2  3         1 4 7
4  5  6         2 5 8
7  8  9         3 6 9

Anticlock-vize

Output:
3  6  9
2  5  8
1  4  7

Clockvize

Output:
7 4 1
8 5 2
9 6 3

*/

void rotate_matrix90degleft( std::vector<std::vector<int> > &a ) {
   transpose(a);
   for(int i=0;i<a.size();i++) {
      reverse(a[i].begin(),a[i].end());  //each vector represents a row, so reverse vector -> reverse row
   }
}

void rotate_matrix90degright( std::vector<std::vector<int> > &a ) {
   transpose(a);
   reverse(a.begin(),a.end()); //each vector represents a row, so reverse rows order
}








#endif /* SOLUTION_H */
