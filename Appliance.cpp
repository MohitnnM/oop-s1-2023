#include <iostream>
#include "Appliance.h"


Appliance::Appliance(int powerRating){}


void Appliance::turnOn(){
    isOn = true;
}

void Appliance::turnOff(){
    isOn = false;
}

void Appliance::set_powerRating(int powerRating){
   powerRating = this->powerRating;
}

int Appliance::get_powerRating(){
    return powerRating;
}

bool Appliance::get_isOn(){
    return isOn;
}

void Appliance::set_isOn(bool isOn){
    isOn = this-> isOn;
}


double Appliance::getPowerConsumption(){
    return 0;
}

