#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirCraft.h"
using namespace std;

class Airplane: public AirCraft{
    private:
        int numPassengers;        
    public:
        Airplane();
        Airplane(int w, int p);
        int get_numPassengers();
        void reducePassengers(int x);
        void fly(int headwind, int minutes);


};

#endif