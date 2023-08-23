#include <iostream>

#include "Person.h"
using namespace std;

extern PersonList createPersonList(int);
extern PersonList deepCopyPersonList(PersonList);

int main() {
  int n = 5;
  PersonList createList = createPersonList(n);
  for (int i = 0; i < n; i++) {
    cout << deepCopyPersonList(createList).people[i].name << endl;
    cout << deepCopyPersonList(createList).people[i].age << endl;
  }
}