#include <cmath>
#include <iostream>

double sum_even(double array[], int n) {
  // setting variables
  double sum = 0.0;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0){
        sum += array[i];
    }
  }
    
 
  return sum;
}
