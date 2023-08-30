#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Vehicle.h"
using namespace std;

int main() {
    time_t time;
    Vehicle* vehicleArray = new Vehicle[3];
    Car c(1);
    Bus b(2);
    Motorbike m(3);

    vehicleArray[0] = c;
    vehicleArray[1] = b;
    vehicleArray[2] = m;

    for (int i = 0; i < 3; i++){
        
    }
}
