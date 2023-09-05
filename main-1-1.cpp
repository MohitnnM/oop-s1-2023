#include <iostream>
#include "Appliance.h"
using namespace std;

int main(){
    Appliance a(100);

    cout<< a.get_powerRating() <<endl;
    cout<< a.get_isOn() <<endl;
    cout<< a.getPowerConsumption() <<endl;
}
