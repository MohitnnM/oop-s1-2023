#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

ParkingLot::ParkingLot() {}

ParkingLot::ParkingLot(Vehicle* vehicles){}

int ParkingLot::getCount(){
    return vehicleCount;
}