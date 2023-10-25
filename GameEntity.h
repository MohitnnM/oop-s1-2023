#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <iostream>
#include <tuple>
using namespace std;

class GameEntity{
    protected:
        tuple<int,int> position;
        char type;
    public:
        GameEntity(int x, int y, char type){
            this->position = make_tuple(x,y);
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

        virtual ~GameEntity(){}
};


#endif