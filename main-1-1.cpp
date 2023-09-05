#include <iostream>
#include "Appliance.h"
using namespace std;

int main(){
    Appliance a(100);

    cout<< a.getPowerConsumption() <<endl;
    cout<< a.get_powerRating() <<endl;
    cout<< a.get_isOn() <<endl;
    
}
