#include <iostream>
using namespace std;

void part_one() {
    double num = 1;
    char character = 'a';
    
    double * p_num = &num;
    char* p_char = &character;

    cout << *p_num  << endl;
    cout << *p_char  << endl;

}

double * dynamicArray(int N, double M){
    double * newArray = new double[N]; 

    for (int i = 0; i < N; i++){
        newArray[i] = M; 
    }

    return(newArray);
}