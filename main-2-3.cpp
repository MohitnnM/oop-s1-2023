#include <iostream>
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void two_five_nine(int[], int);

int main(){
     int array[5] = {10,5,2,7,9};
     two_five_nine(array, 5);
}