#ifndef CELL_H
#define CELL_H
#include <iostream>
#include <tuple>
using namespace std;
class Cell{
    protected:
        tuple<int,int> position;
        char type;
        public:
            Cell(){
                this->position = position;
                this->type = type;
            }
            Cell(int x, int y, char type){
                x = x;
                y = y;
                this->type = type;
            }
            tuple<int,int> getPos(){
                return position;
            }
            char getType(){
                return type;
            }
            void setPos(int x, int y){
                get<0>(position) = x;
                get<1>(position) = y;
            }
            void setType(char type){
                this->type = type;
            }
};

#endif