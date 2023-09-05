#include <iostream>
#include "Fridge.h"
#include "Appliance.h"
using namespace std;

int main(){
    Fridge f(100,50);

    cout << f.getPowerConsumption() << endl;
    cout<< f.get_isOn() << endl;
    cout << f.get_powerRating() << endl;
    cout << f.getVolume() << endl;

}