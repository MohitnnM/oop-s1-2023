#include <iostream>
#include "Unit.h"
using namespace std;


int main(){
    Unit u2;
    int bed = 4;
    int price = 1000;
    double size = 25;
    cout << "second unit: " << u2.get_Num_Bedrooms(bed) << " " << u2.get_Value(price) << " " << u2.get_Area(size) <<  endl;

}