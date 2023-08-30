#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

ParkingLot::ParkingLot() {}

ParkingLot::ParkingLot(int vehicleCount){}

int ParkingLot::getCount(){
    return vehicleCount;
}

int ParkingLot::parkVehicle(Vehicle*&){
    return 0;
}

int ParkingLot::unparkVehicle(int ID){
    return ID;
}