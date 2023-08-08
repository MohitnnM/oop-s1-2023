#include <iostream>
using namespace std;

void changeValues(double * p_num){
    *p_num = 42;

    cout << *p_num << endl;
}

void printArray(double * pArray, int arraySize){
    for (int i = 0; i < arraySize; i++){
        cout<< pArray[i];
        cout<<" ";
    }
    cout << endl;
}

double arrayMax(double * pArray ,int arraySize){
    double max = 0;

    for (int i  = 0; i < arraySize; i++){
        if (max < pArray[i]){
            max = pArray[i];
        }
    }

    return max;
}