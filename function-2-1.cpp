#include <iostream>

int min_element(int array[], int n){
    //setting variables
    int min = array[1];
    //if statement to determine is n is greater than 1, if not
    // then return 0.
    
    if (n >= 1){
    //for loop run through elements and updates min if it is greater
    //than the current element in the array 
        for (int i = 0; i < n; i++){
            if (min > array[i]){
                min = array[i];
            }
        }
    } else{
        return 0;
    }
    
    return min;
}
