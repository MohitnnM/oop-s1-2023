#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

ParkingLot::ParkingLot() {}

ParkingLot::ParkingLot(int capacity): maxCapacity(capacity), vehicleCount(0) {}

int ParkingLot::getCount(){
    return vehicleCount;
}

Vehicle** ParkingLot::parkVehicle(Vehicle* vehicle){
    if (vehicleCount < maxCapacity){
        vehicles[vehicleCount++] = vehicle;
    }
    return vehicles;
}

int ParkingLot::unparkVehicle(int ID){
    int index = -1;
    bool vehicleUnparked;
    for (int i = 0; i < vehicleCount; i++){
        if(vehicles[i]->getID() == ID){
            index = i;
            delete vehicles[i];
            break;   
        }
    }
    if (index != -1) {
        for (int i = 0; i < vehicleCount; i++){
            vehicles[i] = vehicles[i + 1];
        }
        vehicleCount--;
        vehicleUnparked = true;
    }else {
        vehicleUnparked = false;
    }
    return vehicleUnparked;
}