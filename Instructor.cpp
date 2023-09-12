#include <iostream>
#include "Instructor.h"
using namespace std;


Instructor::Instructor(): Instructor("No Name"){}

Instructor::Instructor(string name){
    this->name = name;
}