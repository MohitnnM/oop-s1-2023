#ifndef GAME_H
#define GAME_H
#include "Cell.h"
#include "Effect.h"
#include "Trap.h"
#include "Utils.h"
#include "Character.h"
#include <vector>
using namespace std;

class Game{
    private:
        vector<Cell*> grid;
    public:
        Game(){}
        vector<Cell*>& getGrid(){}
        void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight){

        }
        void gameLoop(int maxIterations, double trapActivationDistance){
            
        }
};

#endif