#include <iostream>
using namespace std;

extern void hexDigits(int*, int);

int main(){
    int length = 10;
    int numbers[10] = {11,2,13,4,15,6,7,8,9,10};
    hexDigits(numbers,length);
}