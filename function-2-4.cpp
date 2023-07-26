#include <iostream>

bool is_ascending(int array[], int n) {
  // setting variables
  bool ascending = false;
  int last_element = array[0];
  int counter = 0;

  // for loop that runs through array and checks if last element is equal
  // or less then the current element, if so then the last_element variable
  // is updated and counter is increased by 1
  for (int i = 0; i < n; i++) {
    if (last_element <= array[i]) {
      last_element = array[i];
      counter++;
    }
  }
  // if statement to check if the counter equals the length of the variable
  // if it does then the array is ascending, otherwise it returns false.
  if (counter == n) {
    ascending = true;
  } else {
    ascending = false;
  }

  return ascending;
}
