#include <iostream>
#include "Grade.h"
using namespace std;

Grade::Grade(){}

Grade::Grade(int value, string assignment){
    this->assignment = assignment;
    this->value = value;
}
