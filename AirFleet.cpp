#include "AirFleet.h"

#include <iostream>
#include <string>

#include "AirCraft.h"
using namespace std;

AirFleet::AirFleet(){}

AirCraft** AirFleet::get_fleet(){
    fleet = new AirCraft*[5];
    
}
