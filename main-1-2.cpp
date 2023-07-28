#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern double array_mean(int[], int);

int main() {
    // array
    int array[5] = {4.2,5.1,6.4,7.1,8.2};
    //prints the anwser
    std::cout << "The average is: " << array_mean(array, 5) << std::endl;
    return 0;
}