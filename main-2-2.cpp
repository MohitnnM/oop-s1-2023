#include <iostream>
#include "Appliance.h"
#include "TV.h"
using namespace std;

int main(){
    TV t(100, 15.5);

    cout << t.getPowerConsumption() << endl;
    cout<< t.get_isOn() << endl;
    cout << t.get_powerRating() << endl;
    cout << t.getVolume() << endl;

}