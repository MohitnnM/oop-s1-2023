#include <iostream>

#include "other.h"
#include "workshop.h"
using namespace std;

int main() {
  // variables for part 2
  double num = 1;
  double* p_num = &num;
  // running function
  changeValues(p_num);

  // variable for part 3
  double array[] = {3, 5, 2};
  double* pArray = &array[0];
  int arraySize = sizeof(array) / sizeof(array[0]);
  // running part3 function
  printArray(pArray, arraySize);
  // part 4
  cout << "the max number in the array is: " << arrayMax(pArray, arraySize)
       << endl;
  //part 7
  int N = 9;
  double M = 2;
  for (int i = 0; i < N; i++) {
    cout << *(dynamicArray(N,M) + i);
    cout << " ";
  }
  cout << endl;

}