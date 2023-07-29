#include <iostream>

bool is_fanarray(int array[], int n) {
  // setting variables
  // Initialise flag to zero.
  int is_palindrome = 0;
  bool palindrome_true_false = true;

  // Loop till array size n/2.
  for (int i = 0; i <= (n / 2); i++) {
    // Check if first and last element are different
    // Then set flag to 1.
    if (array[i] != array[n - i - 1]) {
      is_palindrome == 1;
      break;
    }
  }
  if (is_palindrome == 0){
    return palindrome_true_false == true;
  }
  else {
    return palindrome_true_false == false;
  }

  
}
