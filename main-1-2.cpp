#include <iostream>
#include "Person.h"
using namespace std;
extern PersonList createPersonList(int);

int main(){
     int n = 5;
    PersonList peoples = createPersonList(n);

    for (int i = 0; i < n; i++){
        cout << peoples.people[i].name << " ";
        cout << peoples.people[i].age << endl; 
    }
}