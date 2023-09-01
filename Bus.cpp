#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

Bus::Bus(): Vehicle(0) {};

Bus::Bus(int ID): Vehicle(ID) {}

int Bus::getParkingDuration(){
    int timeDuration = Vehicle::getParkingDuration();
    return (timeDuration - timeDuration*0.25);
}