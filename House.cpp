#include <iostream>
#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
using namespace std;


House::House(){}

House::House(int numAppliances){
    this->numAppliances = numAppliances;
    appliances = new Appliance*[numAppliances];
    currentNumAppliances = 0;
}

bool House::addAppliances(Appliance* appliance){
    if (currentNumAppliances < numAppliances){
        appliances[currentNumAppliances] = appliance;
        currentNumAppliances++; 
        return true;
    } else {
        return false;
    }
}

double House::getTotalPowerConsumption(){
    int totalPowerConsumption = 0;
    for (int i = 0; i < numAppliances; i++){
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }

    return totalPowerConsumption;
}


House::~House(){
    for (int i = 0; i , numAppliances; i++){
        delete[] appliances[i];
    }
    delete[] appliances;
    currentNumAppliances = 0;
}


