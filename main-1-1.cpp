#include <iostream>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int);

int main(){
    int n = 5;
    for (int i = 0; i < n; i++){
        cout << createPersonArray(n)[i].name << endl;
        cout << createPersonArray(n)[i].age << endl;
    } 
    return 0;
}