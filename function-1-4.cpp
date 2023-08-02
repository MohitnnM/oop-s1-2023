#include <iostream>

void print_scaled(int array[3][3], int scaled) {

  // nested loop running through the array and multiplying by scale
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      array[i][j] *= scaled;
    }
  }

  // print results
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        std::cout << array[i][j] << " \n"[j==2];
      }
    }
  }
