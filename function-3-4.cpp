#include <iostream>


void print_pass_fail(char grade) {


// switch statement to print out pass, fail or nothing depending on input
  switch (grade) {
    case 'A':
      std::cout << "Pass" << std::endl;
      break;
    case 'B':
        std::cout << "Pass" << std::endl;
        break;
    case 'C':
        std::cout << "Pass" << std::endl;
        break;
    case 'D':
        std::cout << "Fail" << std::endl;
        break;
    case 'E':
        std::cout << "Fail" << std::endl;
        break;
    default:
        std::cout << "Nothing" << std::endl;
        break;
  }

}
