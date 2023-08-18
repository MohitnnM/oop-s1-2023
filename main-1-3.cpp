#include <iostream>
#include "Person.h"
using namespace std;
extern PersonList createPersonList(int);
extern PersonList deepCopyPersonList(PersonList);

int main(){
    int n = 5;
    PersonList createList = createPersonList(n);

    PersonList pls = deepCopyPersonList(createList);

    for (int i = 0; i < n; i++){
        cout << pls.people[i].name << " ";
        cout << pls.people[i].age << endl; 
    }
}