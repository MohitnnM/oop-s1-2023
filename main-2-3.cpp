#include <iostream>
using namespace std;
// tells program that this function exists
extern int sum_if_palindrome(int[],int);

int main() {
  // intialise variables
    int integers[] = {1,2,3,4,5};
    int length = 5;
  // run function
  cout << sum_if_palindrome(integers, length) << endl;
}