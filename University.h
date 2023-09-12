#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <iostream>
#include "Course.h"
#include "Gradebook.h"
using namespace std;

class University{
    private:
        string name;
        string location;
        Course* courses;
    public:
        University();
        University(string name, string location);
        void addCourse(int id, string name);
};



#endif