#include <iostream>

int num_count(int array[], int n, int number) {
    //setting variables
    int count = 0;

    //for loop run through elements and increase count should the
    //element in the array match the given parameter
    for (int i = 0; i < n; i++){
        if (array[i] == number){
            count += 1;
        }
    }
    //if statement to check if variable n is less than 1
    if (n < 1) {
        count = 0;
    }
    //return value of count
    return count;
}