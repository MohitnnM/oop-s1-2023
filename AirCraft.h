#ifndef AIRCRAFT_H
#define AIRCRAFT_H


class AirCraft{
    protected:
        int weight;
        float fuel;
        int numberOfFlights;
    public:
        AirCraft();
        AirCraft(int w);
        void set_fuel(float fuel);
        float get_fuel();
        void set_weight(int weight);
        int get_weight();
        void set_numberOfFlights(int numberOfFlights);
        int get_numberOfFlights();
        void refuel();
        virtual void fly(int headwind, int minutes);
};

#endif