#include <iostream>
using namespace std;
// tells program that this function exists
extern void print_binary_str(std::string decimal_number);

int main() {
  // intialise variables
    std::string decimal_number = "75";
  // run function
  print_binary_str(decimal_number);
}