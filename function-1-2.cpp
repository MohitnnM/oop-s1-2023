#include <iostream>

int is_identity(int array[10][10]) {

    // nested loop running through the array
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            //checking to see if diagonal does not have one, if it doesnt then return false.
            //then checking other elements of array to see if they are part of diagonal, 
            //if not then check if they are zero, if not then return false.
            if (i == j && array[i][j] != 1){
                return 0;
            }
            else if(i != j && array[i][j] != 0){
                return 0;
            }
        }
    }
    //return true
    return 1;
}