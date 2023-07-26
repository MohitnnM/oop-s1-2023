#include <iostream>
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int max_element(int[], int);

int main(){
     int array[5] = {10,5,2,7,8};
     std::cout << "The maximum number is: " << max_element(array, 5) << std::endl;
}