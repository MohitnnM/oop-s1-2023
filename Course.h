#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include "Person.h"
using namespace std;

class Course{
    protected:
        string name;
        int id;
        int num_persons;
        Person** persons;
    public:
        Course();
        Course(string name, int id, int num_persons);
        void addPerson(Person* p);
};

#endif