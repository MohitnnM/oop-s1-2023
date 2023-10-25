#include <iostream>
using namespace std;
#include "Game.h"


int main(){
    Game game;

    game.initGame(5,5,20,20);
    game.gameLoop(10,5.0);
}