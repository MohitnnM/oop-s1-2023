#include <iostream>
#include <cmath>
using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits){
    int sum = 0;
    int count = number_of_digits-1;

    for (int i = 0; i < number_of_digits; i++){
        sum += binary_digits[i]*pow(2,count);
        count--;
    }

    return(sum);

}

