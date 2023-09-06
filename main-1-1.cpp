#include <iostream>
#include "AirCraft.h"
using namespace std;

int main(){
    AirCraft a(1000);
    a.set_fuel(100);
    a.set_numberOfFlights(0);

    cout<< a.get_numberOfFlights() << endl;
    cout<< a.get_fuel() << endl;
    cout<< a.get_weight() << endl;
}