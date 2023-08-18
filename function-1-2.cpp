#include <iostream>

#include "Person.h"

using namespace std;

PersonList createPersonList(int n) {
  Person* persons = new Person[n];
  PersonList info;
  info.numPeople = n;

  for (int i = 0; i < info.numPeople; i++) {
    persons[i].name = "Jane Doe";
    persons[i].age = 1;
  }
  info.people = persons;

  return info;
}