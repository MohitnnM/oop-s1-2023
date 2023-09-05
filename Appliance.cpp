#include <iostream>
#include "Appliance.h"

Appliance::Appliance(){}

Appliance::Appliance(int powerRating){}


void Appliance::turnOn(){
    isOn = true;
}

void Appliance::turnOff(){
    isOn = false;
}

int Appliance::set_powerRating(int powerRating){
   this->powerRating;
}

int Appliance::get_powerRating(){
    return powerRating;
}

bool Appliance::get_isOn(){
    return isOn;
}

bool Appliance::set_isOn(bool isOn){
    this-> isOn;
}


double Appliance::getPowerConsumption(){
    return 0;
}

