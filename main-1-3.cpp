#include <iostream>
using namespace std;
// tells program that this function exists
extern void count_digits(int[4][4]);

int main() {
  // intialise array
  int array[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 2, 3, 4}, {1, 2, 3, 4}};
  // run function
  count_digits(array);
}