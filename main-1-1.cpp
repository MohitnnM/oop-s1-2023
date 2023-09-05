#include <iostream>
#include "Appliance.h"
using namespace std;

int main(){
    Appliance a;


    cout<< a.getPowerConsumption() << endl;
    cout<< a.get_powerRating() << endl;
    cout<< a.get_isOn() << endl;
    
}
