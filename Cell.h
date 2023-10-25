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
                position = make_tuple(2,3);
            }
            Cell(int x, int y, char type){
                this->position = make_tuple(x, y);
                this->type = type;
            }
            tuple<int,int> getPos(){
                return position;
            }
            char getType(){
                return type;
            }
            void setPos(int x, int y){
                this->position = make_tuple(x,y);
            }
            void setType(char type){
                this->type = type;
            }
            virtual ~Cell(){}
};

#endif