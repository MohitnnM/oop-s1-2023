#include <iostream>
using namespace std;
// tells program that this function exists
extern int sum_min_max(int[],int);

int main() {
  // intialise variables
    int integers[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = 10;
  // run function
  cout << sum_min_max(integers, length) << endl;
}