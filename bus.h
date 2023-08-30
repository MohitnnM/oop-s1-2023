#ifndef BUS_H
#define BUS_H
#include <iostream>
#include <ctime>
#include "car.h"
#include "motorbike.h"
#include "vehicle.h"


class Bus : public Vehicle {
    public:
    Bus();
    Bus(int ID);
    int getParkingDuration();
};

#endif