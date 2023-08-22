#include "Orchestra.h"
#include <iostream>
#include "Musician.h"
using namespace std;

Orchestra::Orchestra(int o_size) { 
    max_size = o_size;
    members = new Musician[o_size]; 
}


int Orchestra::get_current_number_of_members() { return size; }

bool Orchestra::has_instrument(string instrument) {
  for (int i = 0; i < size; i++) {
    if (members[i].get_instrument() == instrument) {
      return true;
    } else {
      return false;
    }
  }
  return true;
}

Musician *Orchestra::get_members() { return members; };

bool Orchestra::add_musician(Musician new_musician) {
  if (size < max_size) {
    members[size] = new_musician;
    size++;
    return true;
  } else {
    return false;
  }
}
Orchestra::~Orchestra(){};