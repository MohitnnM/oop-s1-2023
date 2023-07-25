#include <iostream>

int sum_two_arrays(int array_one[], int array_two[], int n) {
    //setting variables
    int sum = 0;

    //for loop run through elements and increase count should the
    //element in the array match the given parameter
    for (int i = 0; i < n; i++){
        sum += array_one[i] + array_two[i];
    }
    //if statement to check if variable n is less than 1
    if (n < 1) {
        sum = 0;
    }
    //return value of count
    return sum;
}