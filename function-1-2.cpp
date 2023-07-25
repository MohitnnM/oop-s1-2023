#include <iostream>

int array_mean(int array[], int n) {
    int sum = 0;
    double mean = 0;

    for (int i = 0; i < n; i++){
        sum += array[i];
    }
    if (n < 1) {
        sum = 0;
    }
    mean = sum/n;
    return mean;
}