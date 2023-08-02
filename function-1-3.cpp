#include <iostream>

void count_digits(int array[4][4]) {
  // intialising variables
  int ones = 0;
  int twos = 0;
  int threes = 0;
  int fours = 0;
  int fives = 0;
  int sixes = 0;
  int sevens = 0;
  int eights = 0;
  int nines = 0;

  // nested loop running through the array
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      // switch statement to increase count of number 1-9 if found in array
      switch (array[i][j]) {
        case 1:
          ones += 1;
          break;
        case 2:
          twos += 1;
          break;
        case 3:
          threes += 1;
          break;
        case 4:
          fours += 1;
          break;
        case 5:
          fives += 1;
          break;
        case 6:
          sixes += 1;
          break;
        case 7:
          sevens += 1;
          break;
        case 8:
          eights += 1;
          break;
        case 9:
          nines += 1;
          break;
      }
    }
  }

  // print results
  std::cout << "1:" << ones << "; "
            << "2:" << twos << "; "
            << "3:" << threes << "; "
            << "4:" << fours << "; "
            << "5:" << fives << "; "
            << "6:" << sixes << "; "
            << "7:" << sevens << "; "
            << "8:" << eights << "; "
            << "9:" << nines << "; " << std::endl;
}