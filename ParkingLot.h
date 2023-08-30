#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot{
    private:
        Vehicle** vehicles;
        int maxCapacity;
        int vehicleCount;
    public:
        ParkingLot();
        ParkingLot(int capacity);
        int getCount();
        int parkVehicle(Vehicle* vehicle);
        int unparkVehicle(int ID);
        
};
#endif