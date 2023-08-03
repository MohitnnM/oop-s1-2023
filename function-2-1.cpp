// importing libraries
#include <cmath>
#include <iostream>
using namespace std;

void print_binary_str(std::string decimal_number) {
  string remainder = "";
  int quotient = stoi(decimal_number);
  while (quotient != 0) {
    int division = quotient/2;
    if (quotient % 2 != 0) {
      remainder = '1' + remainder;
    } else if (quotient % 2 == 0) {
      remainder = '0' + remainder;
    }
    quotient = floor(division);
  }

  cout << remainder << endl;
}