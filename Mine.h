#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"
#include <tuple>

class Mine: public GameEntity{
    public:
        Mine(int x, int y) : GameEntity(x,y,'M'){}
        Explosion explode(){
            setType('X');
            Explosion explosion(get<0>(getPos()),get<1>(getPos()));
            return explosion;
        }

};


#endif