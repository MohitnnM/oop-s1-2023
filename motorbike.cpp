#include <iostream>
#include <ctime>
#include "motorbike.h"
#include "vehicle.h"

using namespace std;

Motorbike::Motorbike(): Vehicle(0) {};

Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration(){
    time_t presentTime = time(nullptr);
    int timeDiff = difftime(presentTime,timeOfEntry) * 0.85;
    return timeDiff;
}
