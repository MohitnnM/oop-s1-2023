#include <iostream>

int sum_diagonal(int array[4][4]) {
    //intialise variable
    int sum = 0;
    //run through array and if i and j are equal then add the element at that position to sum
    for (int i = 0; i < sizeof(array,1); i++){
        for (int j = 0; j < sizeof(array,2); j++){
            if (i == j){
                sum += array[i][j];
            }
        }
    }
    //return sum
    return sum;
}