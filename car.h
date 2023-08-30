#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <ctime>
#include "motorbike.h"
#include "vehicle.h"
#include "bus.h"

class Car : public Vehicle {
    public:
    Car();
    Car(int ID);
    int getParkingDuration();
};

#endif