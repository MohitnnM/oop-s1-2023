#include <iostream>
#include "Unit.h"
using namespace std;


int main(){
    Unit u1;
    int area = u1.get_area(25);
    int num_beds = u1.get_num_beds(4);
    double price = u1.get_value(1000000);

    cout << area << endl;
    cout << price << endl;
    cout << num_beds << endl;
}