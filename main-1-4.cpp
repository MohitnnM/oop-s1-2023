#include <iostream>
using namespace std;
// tells program that this function exists
extern void print_scaled(int[3][3], int);

int main() {
  // intialise variables
  int scaled = 3;
  int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // run function
  print_scaled(array,3);
}