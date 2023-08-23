#include <iostream>
using namespace std;

extern int* readNumbers();
extern int* reverseArray(int*, int);

int main(){
    int length = 5;
    int* numbers1 = readNumbers();
    int* reversedArray = reverseArray(numbers1,length);



    for (int i = 0; i < length; i++){
        cout << reversedArray[i] << " ";
    } 

}