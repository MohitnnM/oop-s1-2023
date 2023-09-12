#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(): Person("No Name"){}

Person::Person(string name){
    this->name = name;
}

