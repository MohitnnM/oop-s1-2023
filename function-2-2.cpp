#include <iostream>

int max_element(int array[], int n){
    //setting variables
    int max = array[1];
    //if statement to determine is n is greater than 1, if not
    // then return 0.
    
    if (n >= 1){
    //for loop run through elements and updates max if it is smaller
    //than the current element in the array 
        for (int i = 0; i < n; i++){
            if (max < array[i]){
                max = array[i];
            }
        }
    } else{
        return 0;
    }
    
    return max;
}
