#include <iostream>

int count_evens(int number){
    //variables
    int count = 0;
    //for loop to run from 1 to the supplied number
    for (int i = 1; i <= number; i++){
        //if statement to find evens by checking if the element is divisible by 2
        // increasing count if any evens are found 
        if (i % 2 == 0){
            count += 1;
        }
    }
    // checking if the given number is less than
    // 1, if so then count is set to 0
    if (number < 1){
        count = 0;
    }
    return count;
}