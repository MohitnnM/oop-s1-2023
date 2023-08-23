#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int);

int main(){
    int n = 5;
    for (int i = 0; i < n; i++){
        cout << createPersonList(n).people[i].name << endl;
        cout << createPersonList(n).people[i].age << endl;
    }
}