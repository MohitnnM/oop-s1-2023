#include <iostream>

void print_summed(int array1[3][3], int array2[3][3]) {
    int new_array[3][3] = {};
  // nested loop running through the array and summing up the same elements
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      new_array[i][j] = array1[i][j] + array2[i][j];
    }
  }

  // print results
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        std::cout << new_array[i][j] << " \n"[j==2];
      }
    }
  }
