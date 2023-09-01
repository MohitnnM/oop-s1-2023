#include <iostream>
#include <ctime>
#include "Car.h"
#include "Vehicle.h"
using namespace std;

Car::Car(): Vehicle(0) {};

Car::Car(int ID) : Vehicle(ID) {}

int Car::getParkingDuration(){
    int timeDuration = Vehicle::getParkingDuration();
    return (timeDuration - timeDuration*0.1);
}