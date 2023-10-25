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
            for (int i = 0; i < numCharacters; i++){
                auto characterPos = utils.generateRandomPos(gridWidth, gridHeight); 
                Character* character = new Character[get<0>(characterPos), get<1>(characterPos)];
                grid.push_back(character);
            }
            for (int i = 0; i < numTraps; i++){
                auto trapPos = utils.generateRandomPos(gridWidth, gridHeight); 
                Trap* trap = new Trap[get<0>(trapPos), get<1>(trapPos)];
                grid.push_back(trap);
            }
        }
        void gameLoop(int maxIterations, double trapActivationDistance){
            Trap trap;
            for (int i = 0; i < maxIterations; i++){
                for (Cell* entity: grid){
                    Character* character = dynamic_cast<Character*>(entity);
                    character->move(1,0);
                }
                bool trapActive = trap.isActive();
                for (Cell* entity : grid){
                    if (dynamic_cast<Trap*>(entity)){
                        trapActive = false;
                        break
                    }

                    if (trapActive){
                        cout <<
                    }
                }
            }
        }
};

#endif