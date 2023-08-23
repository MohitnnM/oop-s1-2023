#include <iostream>
#include "Unit.h"
using namespace std;


int main(){
    Unit u1;
    int area = u1.get_Area(25);
    int num_beds = u1.get_Num_Bedrooms(4);
    double price = u1.get_Value(1000);

    cout << area << endl;
    cout << price << endl;
    cout << num_beds << endl;
}