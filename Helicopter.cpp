#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"
#include <string>
using namespace std;

Helicopter::Helicopter(){}

Helicopter::Helicopter(int w, string n){
    this->weight = w;
    this->name = n;
}

void Helicopter::set_name(string name){
    this->name = name;
}

string Helicopter::get_name(){
    return(name);
}

void Helicopter::fly(int headwind, int minutes){
    if((headwind < 40) && (weight < 5670)){
        fuel = fuel - (0.2 * minutes);    
    } else if((headwind > 40) && (weight < 5670)){
        fuel = fuel - (0.4 * minutes);   
    } else if((headwind < 40) && (weight > 5670)){
        fuel = fuel - (0.2 * minutes)-(0.01*(weight-5670)*minutes);
    } else if((headwind > 40) && (weight > 5670)){
        fuel = fuel - (0.4 * minutes)-(0.01*(weight-5670)*minutes);
    }
    numberOfFlights++;



}

