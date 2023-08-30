#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <ctime>
#include "Motorbike.h"
#include "Vehicle.h"
#include "Bus.h"

class Car : public Vehicle {
    public:
    Car();
    Car(int ID);
    int getParkingDuration();
};

#endif