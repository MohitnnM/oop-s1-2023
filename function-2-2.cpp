#include <iostream>
#include <cmath>
using namespace std;

int binary_to_int(int binary_digits[30], int number_of_digits) {
    //intialise variables
    int sum = 0;
    int count = number_of_digits-1;
    //loop through the array
    for (int i = 0; i  < number_of_digits; i++){
        //perform the calculation i.e. 
        //(1*2^6)+ (0*2^5) + (0*2^4) + ... + (1*2^0) = 75 
        sum += binary_digits[i] * pow(2,count);
        //decrease count
        count--;
    }

    return(sum);
}