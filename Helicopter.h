#ifndef HELICPOTER_H
#define HELICPOTER_H
#include "AirCraft.h"
using namespace std;
#include <string>

class Helicopter: public AirCraft{
    private:
        string name;        
    public:
        Helicopter();
        Helicopter(int w, string n);
        void set_name(string name);
        string get_name();
        void fly(int headwind, int minutes);


};

#endif