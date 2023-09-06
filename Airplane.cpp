#include "Airplane.h"

#include <iostream>
#include <string>

#include "AirCraft.h"
using namespace std;

Airplane::Airplane() {}

Airplane::Airplane(int w, int p) {
  this->weight = w;
  this->numPassengers = p;
}


void Airplane::reducePassengers(int x) {
  if (numPassengers > x) {
    numPassengers = numPassengers - x;
  } else {
    numPassengers = 0;
  }
}

int Airplane::get_numPassengers() { return (numPassengers); }

void Airplane::fly(int headwind, int minutes) {
  if ((headwind < 60)) {
    fuel = fuel - (0.3 * minutes) - (0.001* numPassengers);
  } else if ((headwind >= 60)) {
    fuel = fuel - (0.5 * minutes)  - (0.001* numPassengers);
  }
  numberOfFlights++;
}
