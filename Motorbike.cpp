#include <iostream>
#include <ctime>
#include "Motorbike.h"
#include "Vehicle.h"

using namespace std;

Motorbike::Motorbike(): Vehicle(0) {};

Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration(){
    time_t presentTime = time(nullptr);
    int timeDiff = difftime(presentTime,timeOfEntry);
    return timeDiff*0.85;
}