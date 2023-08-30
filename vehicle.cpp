#include <iostream>
#include <ctime>
#include "vehicle.h"
using namespace std;

Vehicle::Vehicle(): Vehicle(0) {}

Vehicle::Vehicle(int ID){
    this->ID = ID;
    timeOfEntry = time(nullptr);
}

int Vehicle::getID(){
    return ID;
}