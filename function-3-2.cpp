#include <cmath>
#include <iostream>

int median_array(int array[], int n) {
  // setting variables
  int mid_pos = n / 2;
  int median = 0;
  int num = 0;

  // if statement that checks if array size is positive or negative
  if (n % 2 == 1) {
    // nested loop that compares the current element to the next 
    // elements to see if there are any  greater elements 
    // if so then the elements are swapped
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (array[j] < array[i]) {
          num = array[i];
          array[i] = array[j];
          array[j] = num;
        }
      }
    }
    // calculates the median once array has been sorted
    median = array[mid_pos];

  } else {
    return 0;
  }
 
  return median;
}
