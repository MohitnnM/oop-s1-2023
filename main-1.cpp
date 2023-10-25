#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
using namespace std;


int main(){
    Utils test;
    tuple<int,int> pos1 = test.generateRandomPos(10,10);
    tuple<int,int> pos2 = test.generateRandomPos(10,10);

    double distance = test.calculateDistance(pos1,pos2);

    cout<< "Position 1: " << get<0>(pos1) << ", " << get<0>(pos1) << endl; 
    cout<< "Position 2: " << get<0>(pos2) << ", " << get<0>(pos2) << endl;
    cout<< "Distance: " << distance << endl;
}