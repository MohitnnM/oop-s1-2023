#include <iostream>

double weighted_average(int array[], int n) {
  // setting variables
  double average = 0;
  int counter = 0;

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (array[i] == array[j]) {
        counter++;
      }
    }
    average += (array[i] * counter) / n;
    counter = 0;
  }

  return average;
}
