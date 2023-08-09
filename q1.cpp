#include <iostream>
#include "functions.h"
using namespace std;

int main(){
    int array1[] = {5,4,3,2,1};
    int array2[] = {1,1,1,1,1};
    int n = sizeof(array1)/sizeof(array1[0]);
    int number = 5;

    cout << arraySum(array1,n) << endl;
    cout << arrayMean(array1,n) << endl;
    cout << numCount(array1, n, number) << endl;
    cout << sum_2_arrays(array1,array2,n) << endl;
    cout << count_evens(number) << endl;
    cout<< is_ascending(array1,n) << endl;
    cout<< is_descending(array1,n) << endl;
}