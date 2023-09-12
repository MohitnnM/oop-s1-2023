#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(): Course("No Name", 0, 0){}

Course::Course(string name, int id, int num_persons){
    this->name = name;
    this->id = id;
    this->num_persons = num_persons;
    Person** persons = new Person*[num_persons];
}

void Course::addPerson(Person* p){
}