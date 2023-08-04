#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length) {
  // intialise variables
  int check_palindrome = 0;

  //check if length is greater than 0, if so then continue else return false
  if (length > 0) {
    //loop through through array from first element to the midway element
    // and check if the same element on the other side match
    // if they dont match return 0 (1 = true, 0 = false) 
    for (int i = 0; i < length / 2; i++) {
      if (integers[i] != integers[length - i - 1]) {
        return (0);
      }
    }
    return (1);
  } else {
    return (0);
  }
}

int sum_array_elements(int integers[], int length) {
  // intialise variables
  int sum = 0;
  //loop through array and sum all elements
  // checking that length is greater than 0, if not then return false or 0;
  if (length > 0) {
    for (int i = 0; i < length; i++) {
      sum += integers[i];
    }
  } else {
    return (0);
  }
  return (sum);
}

int sum_if_palindrome(int integers[], int length) {
    //initialise variables
  int palindrome_true_false = is_palindrome(integers, length);
  int sum = sum_array_elements(integers, length);
    //if true or 1 is returned then return the sum of all elements otherwise
    // if it is false or 0 then return 0 or false
  if (palindrome_true_false == 1) {
    return (sum);
  } else if (palindrome_true_false == 0) {
    return (0);
  }
}
