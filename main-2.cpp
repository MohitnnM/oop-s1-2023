#include <iostream>
#include "GameEntity.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
using namespace std;


int main(){
    Ship ship(1,2);
    Mine mine(3,4);
    mine.explode();
    ship.move(2,2);

    Explosion explosion(1,1);
    explosion.apply(ship);
    int x = get<0>(ship.getPos());
    int y = get<1>(ship.getPos());
    char t = ship.getType();
    cout << "Pos: " << x << ", " << y << endl;
    cout << "Type: " << t << endl;
    return 0;

}