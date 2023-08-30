#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot{
    private:
        Vehicle* vehicles = new Vehicle[5];
        int maxCapacity;
        int vehicleCount;
    public:
        ParkingLot();
        ParkingLot(Vehicle* vehicles);
        int getCount();
};
#endif