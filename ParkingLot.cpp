#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

ParkingLot::ParkingLot() {}

ParkingLot::ParkingLot(int capacity): maxCapacity(capacity), vehicleCount(0) {
    vehicles = new Vehicle*[maxCapacity];
}

int ParkingLot::getCount(){
    return vehicleCount;
}

int ParkingLot::parkVehicle(Vehicle* vehicle){
    if (vehicleCount < maxCapacity){
        vehicles[vehicleCount++] = vehicle;
    }
    return 0;
}

int ParkingLot::unparkVehicle(int ID){
    for (int i = 0; i < vehicleCount; i++){
        if(vehicles[i]->getID() == ID){
            delete vehicles[i];
            vehicleCount--;
            return 1;
        }else{
            return 0;
        }
    }
}