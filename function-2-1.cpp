// importing libraries
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

void print_binary_str(std::string decimal_number) {
  //intialising variables
  int quotient = stoi(decimal_number);
  int remainder[7] = {};
  int count = 0;
  int start = remainder[0];
  int end = (sizeof(remainder) / sizeof(remainder[0])) - 1; 
  string output_str;
  // a while loop that runs the demical to binary conversion
  while (quotient != 0) {
    //first divides the frst number by 2
    int division = quotient / 2;
    //checks if the number is divisible by 2, if true then remainder is 0 else remainder is 1 
    if (quotient % 2 != 0) {
      remainder[count] = 1;
    } else if (quotient % 2 == 0) {
      remainder[count] = 0;
    }
    //rounds the quotient then increases count
    quotient = floor(division);
    count++;
  }
  //reverser the array
   while (start < end)
    {
        //saves the first element
        int temp = remainder[start];
        //replaces the start element with the last
        remainder[start] = remainder[end];
        //changes the last element with the first element stored in temp
        remainder[end] = temp;
        //increases start while decreasing end
        start++;
        end--;
    } 
    //converts array to str
  for (int i : remainder) {
    output_str += to_string(i);
  }
  //prints out results
  cout << output_str << endl;
}