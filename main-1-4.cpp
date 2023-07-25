#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sum_two_arrays(int[], int[], int);

int main() {
    // array
    int array_one[5] = {4,5,6,7,8};
    int array_two[5] = {1,2,3,4,5};
    //prints the anwser
    std::cout << "The number is: " << sum_two_arrays(array_one, array_two, 5) << std::endl;
    return 0;
}