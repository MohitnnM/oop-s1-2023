#include <iostream>
#include "AirCraft.h"
using namespace std;

AirCraft::AirCraft(){}

AirCraft::AirCraft(int w){
    this->weight = w;
}

void AirCraft::set_fuel(float fuel){
    this->fuel = fuel;
}

float AirCraft::get_fuel(){
    return fuel;
}

void AirCraft::set_weight(int weight){
    this->weight = weight;
}

int AirCraft::get_weight(){
    return weight;
}

void AirCraft::set_numberOfFlights(int numberofFlights){
    this->numberOfFlights = numberOfFlights;
}

int AirCraft::get_numberOfFlights(){
    return numberOfFlights;
}

void AirCraft::refuel(){
    fuel = 100;
}

void AirCraft::fly(int headwind, int minutes){
    numberOfFlights += 1;
}


