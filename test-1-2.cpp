#include <iostream>
using namespace std;

extern bool equalsArray(int*, int*, int);

int main(){
    int length = 5;
    int numbers1[5] = {1,2,3,4,5};
    int numbers2[5] = {1,2,4,4,5};

    cout << equalsArray(numbers1,numbers2, length);
}
