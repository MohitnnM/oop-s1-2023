#include <iostream>
using namespace std;

extern int bin_to_int(int[],int);

int main(){
    int binary_digits[] = {1,0,0,1,0,1,1};
    int number_of_digits = 7;

    cout<< bin_to_int(binary_digits, number_of_digits);
}