#include <iostream>
#include <cmath>
int transform(int N, int base){
    int quotient = N;
    int remainder[10] = {};
    int count = 0;
    while (quotient !=0){
        int division = quotient / base;
        if (quotient % base != 0){
            remainder[count] = 1;
        } else if (quotient % base == 0) {
            remainder[count] = 0;
        }
        quotient = floor(division);
        count++;
    }

    for (int i = count - 1; i >= 0; i--){
        std::cout<< remainder[i];
    }
    std::cout << std::endl;
}
int main(){
    int N = 0;
    int base = 0;
    std::cout << "Enter integer to be converted: ";
    std::cin >> N;
    std::cout << "Enter base to convert to: ";
    std::cin >> base;
    transform(N,base);
    return 0;
}