#include <iostream>
using namespace std;

extern int palindrome_sum(int[],int);

int main(){
    int integers[5] = {1,2,3,1};
    int length = 4;

    cout << palindrome_sum(integers, length);

}