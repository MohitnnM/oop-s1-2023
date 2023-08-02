#include <iostream>

int is_identity(int array[10][10]) {


    for (int i = 0; i < sizeof(array,1); i++){
        for (int j = 0; j < sizeof(array,2); j++){
            if (i == j && array[i][j] != 1){
                return 0;
            }
            else if(i != j && array[i][j] != 0){
                return 0;
            }
        }
    }
    return 1;
}