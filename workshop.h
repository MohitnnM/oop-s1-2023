#include <iostream>
using namespace std;

void changeValue(double * p_num){
    *p_num = 42;
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

double * dynamicArray(int N, double M){
    double * newArray = new double[N]; 

    for (int i = 0; i < N; i++){
        newArray[i] = M; 
    }

    return(newArray);
}