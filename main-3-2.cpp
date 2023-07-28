#include <iostream>
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int median_array(int[], int);

int main(){
     int array[5] = {1,5,3,4,6};
     std::cout << "The median is: " <<median_array(array, 5)<< std::endl;
}