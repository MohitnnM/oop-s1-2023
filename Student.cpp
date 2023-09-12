#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(): Student(0){}

Student::Student(int id){
    this->id = id;
}