#include <iostream>
using namespace std;
//tells program that this function exists 
extern int is_identity(int[10][10]);

int main() {
//intialise array
  int array[10][10] = {{1,0,0,0,0,0,0,0,0,0}, 
                       {0,1,0,0,0,0,0,0,0,0}, 
                       {0,0,1,0,0,0,0,0,0,0}, 
                       {0,0,0,1,0,0,0,0,0,0},
                       {0,0,0,0,1,0,0,0,0,0},
                       {0,0,0,0,0,1,0,0,0,0},
                       {0,0,0,0,0,0,1,0,0,0},
                       {0,0,0,0,0,0,0,1,0,0},
                       {0,0,0,0,0,0,0,0,1,0},
                       {1,0,0,0,0,0,0,0,0,1}};
// print array 
  cout << is_identity(array) << endl;
  return 0;
}