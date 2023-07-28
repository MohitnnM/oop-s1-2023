#include <iostream>
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern void print_pass_fail(char);

int main() {
  char grade = 'F';
  print_pass_fail(grade);
}