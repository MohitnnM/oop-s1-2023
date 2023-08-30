#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

ParkingLot::ParkingLot() {}

ParkingLot::ParkingLot(int vehicleCount){}

int ParkingLot::getCount(){
    return vehicleCount;
}