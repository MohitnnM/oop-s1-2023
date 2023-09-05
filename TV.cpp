#include <iostream>
#include "TV.h"
using namespace std;

TV::TV(){
    screenSize = 0;
}

TV::TV(int powerRating, double screenSize){
    this->powerRating = powerRating;
    this->screenSize = screenSize;
}

void TV::setVolume(double screenSize){
    this->screenSize = screenSize;
}

double TV::getVolume(){
    return screenSize;
}

double TV::getPowerConsumption(){
    int powerConsumption = powerRating * (screenSize/100);
    return powerConsumption;  
}

