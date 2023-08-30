#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <ctime>
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
using namespace std;

class Vehicle {
    protected:
        time_t timeOfEntry;
        int ID;
    public:
    Vehicle();
    Vehicle(int ID);
    int getID(); 
};
#endif