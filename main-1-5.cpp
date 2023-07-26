#include <iostream>
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count_evens(int);

int main(){

    //prints the anwser
    std::cout << "The number is: " << count_evens(4) << std::endl;

    return 0;
}