#ifndef GRADE_H
#define GRADE_H

#include <iostream>
using namespace std;

class Grade{
    private:
        int student_id;
        int value;
        string assignment;
    public:
        Grade();
        Grade(int value, string assignment);
};

#endif