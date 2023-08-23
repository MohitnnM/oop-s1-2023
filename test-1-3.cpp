#include <iostream>
using namespace std;

extern int* readNumbers();
extern int* reverseArray(int*, int);
extern bool equalsArray(int *, int*, int);

int main(){
    int length = 5;
    int* numbers1 = readNumbers();
    int* reversedArray = reverseArray(numbers1,length);

    cout << equalsArray(numbers1,reversedArray,length) << endl;

     delete[] numbers1;
     delete[] reversedArray;
}