#include <iostream>

void weighted_average(int array[], int n) {
  // setting variables
  int counter = 0;
  int current_element = 0;
  int new_array[] = {};

    for (int i = 1; i < n; i++){
      for (int j = 0; j < n; j++){
        if (current_element == array[j]){
          counter++;
        }
      }
      counter = new_array[1];
      counter = 0;
    }

    std::cout << new_array << std::endl;
}
