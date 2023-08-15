#include <iostream>
using namespace std;

extern int* readNumbers();
extern void hexDigits(int*, int);

int main(){
    int length = 10;
    int *numbers = readNumbers();
    hexDigits(numbers,length);
}