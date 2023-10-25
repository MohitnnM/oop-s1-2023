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
            Utils utils;
            Character character;
            Trap trap;
            for (int i = 0; i < numCharacters; i++){
                auto characterPos = utils.generateRandomPos(gridWidth, gridHeight); 
                character.setPos(get<0>(characterPos), get<1>(characterPos));
            }
            for (int i = 0; i < numTraps; i++){
                auto trapPos = utils.generateRandomPos(gridWidth, gridHeight); 
                trap.setPos(get<0>(trapPos), get<1>(trapPos));
            }
        }
        void gameLoop(int maxIterations, double trapActivationDistance){
            for (int i = 0; i < maxIterations; i++){
                for (Cell* entity: grid){

                }
            }
        }
};

#endif