#include <iostream>
#include "Person.h"
using namespace std;
extern Person* createPersonArray(int);

int main(){
    int n = 5;
    Person* peoples = createPersonArray(n);

    for (int i = 0; i < n; i++){
        cout << peoples[i].name << " ";
        cout << peoples[i].age << endl; 
    }
}