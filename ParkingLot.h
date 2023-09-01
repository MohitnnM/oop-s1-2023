#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot{
    private:
        int maxCapacity;
        Vehicle** vehicles = new Vehicle*[maxCapacity];
        int vehicleCount;
    public:
        ParkingLot();
        ParkingLot(int capacity);
        int getCount();
        Vehicle** parkVehicle(Vehicle* vehicle);
        int unparkVehicle(int ID);

        
};
#endif