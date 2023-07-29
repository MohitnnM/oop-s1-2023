#include <iostream>
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void weighted_average(int[], int);

int main(){
     int array[5] = {1,5,3,4,6};
     //std::cout << "The weighted average is: " <<weighted_average(array, 5)<< std::endl;
     weighted_average(array, 5);
}