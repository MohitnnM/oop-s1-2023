#include <iostream>

int array_mean(int array[], int n) {
    //setting variables
    int sum = 0;
    double mean = 0;
    //for loop to calculate sum of all elements in the array
    for (int i = 0; i < n; i++){
        sum += array[i];
    }
    //if statement to check if variable n is less than 1
    if (n < 1) {
        mean = 0.0;
    } else{
        //else statement to calculate mean if n >1
        mean = sum/n;
    }
    //return value of mean
    return mean;
}