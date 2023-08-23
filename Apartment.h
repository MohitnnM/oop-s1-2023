#include <iostream>

#include "Unit.h"
using namespace std;

class ApartmentBuilding {
 private:
  int capacity;
  int num_units;
  int* units;

 public:
  ApartmentBuilding() { capacity = 10; }
  ApartmentBuilding(int capacity);
  int get_Capacity();
  int get_Current_Number_of_Units();
  Unit* get_Contents();
  bool add_Unit(Unit unit);

  ~ApartmentBuilding();
};
