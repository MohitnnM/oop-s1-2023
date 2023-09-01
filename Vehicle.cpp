#include <iostream>
#include <time.h>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(): Vehicle(0) {}

Vehicle::Vehicle(int ID): ID(ID){
    timeOfEntry = time(nullptr);
}

int Vehicle::getID(){
    return ID;
}

int Vehicle::getParkingDuration(){
    time_t presentTime = time(nullptr);
    int timeDiff = difftime(presentTime,timeOfEntry);
    return timeDiff;
}