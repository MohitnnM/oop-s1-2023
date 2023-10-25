#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cell.h"
class Character: public Cell{
    public:
        Character(int x, int y) : Cell(x,y,'C'){}
        void move(int dx, int dy){
            int x, y;
            tuple<int,int> pos = getPos();
            x = get<0>(pos);
            y = get<1>(pos);

            setPos(x + dx, y + dy);

        }
};

#endif
