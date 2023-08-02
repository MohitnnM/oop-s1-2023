#include <iostream>

int sum_diagonal(int array[4][4]) {
    int sum = 0;

    for (int i = 0; i < sizeof(array,1); i++){
        for (int j = 0; j < sizeof(array,2); j++){
            if (i == j){
                sum += array[i][j];
            }
        }
    }
    return sum;
}