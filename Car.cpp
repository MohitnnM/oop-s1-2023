#include <iostream>
#include <ctime>
#include "Car.h"
#include "Vehicle.h"
using namespace std;

Car::Car(): Vehicle(0) {};

Car::Car(int ID) : Vehicle(ID) {}

int Car::getParkingDuration(){
    time_t presentTime = time(nullptr);
    int timeDiff = difftime(presentTime,timeOfEntry)* 0.9;
    return timeDiff;
}
