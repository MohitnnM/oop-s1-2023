#include <iostream>
#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
using namespace std;

int main(){
    Utils util;
    Cell cell(0,0, 'C');
    tuple<int,int> pos1 = util.generateRandomPos(10,10);
    tuple<int,int> pos2 = util.generateRandomPos(10,10);
    double distance = util.calculateDistance(pos1,pos2);

    cout<< "X1: " << get<0>(pos1) << " X1: " << get<1>(pos1) << endl;
    cout<< "X2: " << get<0>(pos2) << " Y2: " << get<1>(pos2) << endl;
    cout<< distance << endl;
}