#include <iostream>

#include "other.h"
#include "workshop.h"
using namespace std;

int main() {
  // part 5
  int N = 10;
  double M = 1;
  for (int i = 0; i < N; i++) {
    cout << *(dynamicArray(N,M) + i);
    cout << " ";
  }
  cout << endl;

  //part 6
  double* array_new = dynamicArray(N,M);
  double max = arrayMax(array_new, N);
  cout<< max<< endl;
  delete[] array_new;

}