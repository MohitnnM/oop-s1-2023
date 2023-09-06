#include <iostream>
#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
using namespace std;

int main(){
    House h(2);

    h.addAppliances(new Fridge(100,50));
    h.addAppliances(new Fridge(200,50));
    cout << h.getTotalPowerConsumption() << endl;
}