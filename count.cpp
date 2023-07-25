#include <iostream>
//function
int count(int array[], int n){
    //integer to keep track of even numbers
    int evenCount = 0;
    //for loop that runs through the array and determines if number is divisible by 2. if so evenCount is increased by 1.
    for (int i = 0; i < n; i++){
        if (array[i] %2 == 0){
            evenCount++;
        }
    }
    //returns count
    return evenCount;
}