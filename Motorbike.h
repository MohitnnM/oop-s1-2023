#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <iostream>
#include <ctime>
#include "Car.h"
#include "Vehicle.h"
#include "Bus.h"


class Motorbike : public Vehicle {
    public:
    Motorbike();
    Motorbike(int ID);
    int getParkingDuration();
};

#endif