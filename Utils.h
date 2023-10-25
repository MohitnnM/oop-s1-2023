#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <tuple>
#include <random>
#include <cmath>
using namespace std;
class Utils{
    public:
        static tuple<int,int> generateRandomPos(int gridWidth, int gridHeight){
            int randX, randY;
            randX = rand() % gridWidth - 1;
            randY = rand() % gridHeight - 1;
            return make_tuple(randX,randY);
        }        
        static double calculateDistance(tuple<int,int> pos1, tuple<int,int> pos2){
            int x1,x2,y1,y2;
            tie(x1,y1) = pos1;
            tie(x2,y2) = pos2;
            return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        }
};

#endif