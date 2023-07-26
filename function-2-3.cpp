#include <iostream>

void two_five_nine(int array[], int n) {
  // setting variables
  int twos = 0;
  int fives = 0;
  int nines = 0;
  // for loop that runs through array and increases relevant variable when
  // element matches
  for (int i = 0; i < n; i++) {
    switch (array[i]) {
      case 2:
        twos += 1;
        break;
      case 5:
        fives += 1;
        break;
      case 9:
        nines += 1;
        break;
    }
  }

  // printing number of 2, 5 and 9
  std::cout << "2:" << twos << ";"
            << "5:" << fives << ";"
            << "9:" << nines << ";" << std::endl;
}
