#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <iostream>
#include <ctime>
#include "car.h"
#include "vehicle.h"
#include "bus.h"


class Motorbike : public Vehicle {
    public:
    Motorbike();
    Motorbike(int ID);
    int getParkingDuration();
};

#endif