#include <iostream>
using namespace std;
// tells program that this function exists
extern void print_summed(int[3][3], int[3][3]);

int main() {
  // intialise variables
  int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int array2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // run function
  print_summed(array1,array2);
}