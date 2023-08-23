#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int);
extern PersonList shallowCopyPersonList(PersonList); 

int main(){
    int n = 5;
    PersonList copyArray = createPersonList(n);

    for (int i= 0; i < n; i++){
        cout << shallowCopyPersonList(copyArray).people[i].name << endl;
        cout << shallowCopyPersonList(copyArray).people[i].age << endl;
    }
}