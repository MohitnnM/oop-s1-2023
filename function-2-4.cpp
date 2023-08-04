#include <iostream>
using namespace std;

int array_min(int integers[10], int length) {
  // intialise variables
  int min = integers[0];
  // loop through array and check if any element is  smaller then variable min
  // if so then min is equal to that element
  if (length > 0) {
    for (int i = 0; i < length; i++) {
      if (min > integers[i]) {
        min = integers[i];
      }
    }
  } else {
    return (-1);
  }

  return (min);
}

int array_max(int integers[10], int length) {
  // intialise variables
  int max = 0;

  // loop through array and check if any element is greater then variable max
  // if so then max is equal to that element
  if (length > 0) {
    for (int i = 0; i < length; i++) {
      if (max < integers[i]) {
        max = integers[i];
      }
    }
  } else {
    return (-1);
  }
  return (max);
}

int sum_min_max(int integers[10], int length) {
  // intialise variables
  int sum = 0;
  int min = array_min(integers, length);
  int max = array_max(integers, length);

  // sum min and max
  if (length > 0) {
    sum = min + max;
  } else {
    return (-1);
  }

  return (sum);
}
