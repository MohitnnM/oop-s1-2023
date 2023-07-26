#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int array_sum(int[], int);

int main() {
    // array
    int array[5] = {4,5,6,7,8};
    //prints the anwser
    std::cout << "The number is: " << array_sum(array, 5) << std::endl;
    return 0;
}