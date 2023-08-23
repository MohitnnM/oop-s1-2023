#include <iostream>
using namespace std;

class Unit {
 private:
  int unit_val;
  int num_beds;
  double unit_size;

 public:
  Unit() {
    unit_val = 0;
    num_beds = 0;
    unit_size = 0;
  }
  Unit(int unit_val, int num_beds, double unit_size);
  int get_num_bedrooms(int num_beds);
  int get_value(int unit_val);
  double get_area(double unit_size);
};