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
        vector<Cell*>& getGrid(){
            return grid;
        }
        void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight){
            for (int i = 0; i < numCharacters; i++){
                
            }
        }
        void gameLoop(int maxIterations, double trapActivationDistance){
            
        }
};

#endif