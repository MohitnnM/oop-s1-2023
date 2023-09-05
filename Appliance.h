#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
    protected:
        int powerRating;
        bool isOn;
    public:
        Appliance() {
            powerRating = 100;
            isOn = false;
        }
        Appliance(int powerRating);        

        void turnOn();
        void turnOff();
        int get_powerRating();
        int set_powerRating(int powerRating);
        bool get_isOn();
        bool set_isOn(bool isOn);
        virtual double getPowerConsumption();          
};

#endif