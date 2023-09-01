#include <iostream>
#include <ctime>
#include "Motorbike.h"
#include "Vehicle.h"

using namespace std;

Motorbike::Motorbike(): Vehicle(0) {};

Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration(){
    int timeDuration = Vehicle::getParkingDuration();
    return (timeDuration - timeDuration*0.15);
}