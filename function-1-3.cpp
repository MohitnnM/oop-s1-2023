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

PersonList deepCopyPersonList(PersonList pl) {
  PersonList List = pl;
  Person* peoples = new Person[pl.numPeople];

  for (int i = 0; i < pl.numPeople; i++){
    peoples[i].name = pl.people[i].name;
    peoples[i].age = pl.people[i].age;
  }
  List.people = peoples;

  return List;
}