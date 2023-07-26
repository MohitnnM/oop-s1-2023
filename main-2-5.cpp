#include <iostream>
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern bool is_descending(int[], int);

int main(){
     int array[5] = {6,5,4,3,2};
     std::cout << is_descending(array, 5)<< std::endl;
}