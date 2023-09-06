#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House{
    private:
        int numAppliances;
        Appliance** appliances;
        int currentNumAppliances;
    public:
        House();
        House(int numAppliances);
        bool addAppliances(Appliance* appliance);
        double getTotalPowerConsumption();
        ~House();
};

#endif