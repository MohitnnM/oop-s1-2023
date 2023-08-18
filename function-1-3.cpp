#include <iostream>
#include "Person.h"
using namespace std;

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