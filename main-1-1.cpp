#include <iostream>
#include "Appliance.h"
using namespace std;

int main(){
    Appliance a(100);
    a.set_powerRating(100);


    cout<< a.getPowerConsumption() << endl;
    cout<< a.get_powerRating() << endl;
    cout<< a.get_isOn() << endl;

    a.set_isOn(true);
    a.set_powerRating(500);

    cout<< a.getPowerConsumption() << endl;
    cout<< a.get_powerRating() << endl;
    cout<< a.get_isOn() << endl;
}
