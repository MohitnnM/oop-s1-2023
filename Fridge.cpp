#include <iostream>
#include "Fridge.h"
using namespace std;

Fridge::Fridge(){
    volume = 0;
}

Fridge::Fridge(int powerRating, double volume){
    this-> powerRating = powerRating;
    this->volume = volume;
}


void Fridge::setVolume(double volume){
    this->volume = volume;
}


double Fridge::getVolume(){
    return volume;
}

double Fridge::getPowerConsumption(){
    int powerConsumption = powerRating * 24 * (volume/100);

    return powerConsumption;
}
