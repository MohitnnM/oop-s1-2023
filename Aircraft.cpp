#include <iostream>
#include "Aircraft.h"
using namespace std;

Aircraft::Aircraft(){
    fuel = 100;
    numberOfFlights = 0;
}

Aircraft::Aircraft(int w){
    this->weight = w;
}

void Aircraft::set_fuel(float fuel){
    this->fuel = fuel;
}

float Aircraft::get_fuel(){
    return fuel;
}

void Aircraft::set_weight(int weight){
    this->weight = weight;
}

int Aircraft::get_weight(){
    return weight;
}

void Aircraft::set_numberOfFlights(int numberofFlights){
    this->numberOfFlights = numberOfFlights;
}

int Aircraft::get_numberOfFlights(){
    return numberOfFlights;
}

void Aircraft::refuel(){
    fuel = 100;
}

void Aircraft::fly(int headwind, int minutes){
    numberOfFlights += 1;
}


