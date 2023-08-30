#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

Bus::Bus(): Vehicle(0) {};

Bus::Bus(int ID): Vehicle(ID) {}

int Bus::getParkingDuration(){
    time_t presentTime = time(nullptr);
    int timeDiff = difftime(presentTime,timeOfEntry) * 0.75;
    return timeDiff;
}
