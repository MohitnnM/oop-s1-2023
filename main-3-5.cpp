#include <iostream>
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double sum_even(double[], int);

int main(){
     double array[5] = {1,5.3,3,4.1,6};
     std::cout << "The sum of even numbers is: " << sum_even(array, 5)<< std::endl;
}