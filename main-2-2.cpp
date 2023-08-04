#include <iostream>
using namespace std;
// tells program that this function exists
extern int binary_to_int(int[],int);

int main() {
  // intialise variables
    int binary_digits[30] = {1,0,0,1,0,1,1};
    int number_of_digits = 7;
  // run function
  cout << binary_to_int(binary_digits, number_of_digits) << endl;
}