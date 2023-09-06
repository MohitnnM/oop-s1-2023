#ifndef AIRFLEET_H
#define AIRFLEET_H
#include "AirCraft.h"
using namespace std;

class AirFleet{
    private:
        AirCraft** fleet;
        AirCraft** get_fleet();     
    public:
        AirFleet();


};

#endif