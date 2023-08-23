#include <iostream>
#include "Unit.h"
using namespace std;

Unit::Unit(int u_unit_val, int u_num_beds, double u_unit_size){
   unit_val = u_unit_val;
   num_beds = u_num_beds;
   unit_size = u_unit_size;
}

int Unit::get_Num_Bedrooms(int num_beds){
    return num_beds;
}
int Unit::get_Value(int unit_val){return unit_val;}
double Unit::get_Area(double unit_size){return unit_size;}

