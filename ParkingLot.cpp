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

void ParkingLot::parkVehicle(Vehicle* vehicle){
    if (vehicleCount < maxCapacity){
        vehicles[vehicleCount++] = vehicle;
    }else {
        cout << "The lot is full" << endl;
    }
    
}

void ParkingLot::unparkVehicle(int ID){
    int index = -1;
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
    }else {
        cout << "Vehicle not in the lot";
    }
}
