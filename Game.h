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
                        break;
                    }

                    if (trapActive){
                        cout << "Game over" << endl;
                    }
                }
            }
        }
};

#endif