#ifndef TV_H
#define TV_H
#include "Appliance.h"

class TV: public Appliance{
    private:
        double screenSize;
    public: 
        TV();
        TV(int powerRating, double screenSize);
        void setVolume(double screenSize);
        double getVolume();
        double getPowerConsumption();
};

#endif