#ifndef AIRFLEET_H
#define AIRFLEET_H
#include "AirCraft.h"
using namespace std;

class AirFleet{
    private:
        AirCraft **fleet;      
    public:
        AirFleet();
        AirFleet(int w, int p);
        int get_numPassengers();
        void reducePassengers(int x);
        void fly(int headwind, int minutes);


};

#endif