#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include <iostream>
#include "Musician.h"
using namespace std;

class Orchestra {
 private:
  int max_size;
  int size;
  Musician* members;

 public:
  Orchestra() { max_size = 5; size = 0; }
  Orchestra(int);
  int get_current_number_of_members();
  bool has_instrument(string);
  Musician *get_members();
  bool add_musician(Musician);
  ~Orchestra();
};
#endif
