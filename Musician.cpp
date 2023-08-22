#include "Musician.h"
#include <iostream>
using namespace std;

Musician::Musician(string m_instrument, int m_experience) {
  instrument = m_instrument;
  experience = m_experience;
}

string Musician::get_instrument(){return instrument;}
int Musician::get_experience(){return experience;}