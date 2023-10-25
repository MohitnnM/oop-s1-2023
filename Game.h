#ifndef GAME_H
#define GAME_H
#include <vector>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include "Utils.h"
#include "Effect.h"
#include <iostream>
using namespace std;

class Game{
    private:
        vector<GameEntity*> entities;
    public:
        vector<GameEntity*> get_entities(){
            return entities;
        }
        void set_entities(vector<GameEntity*>& entities){
            entities = entities;
        }
        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
            Utils util;
            for (int i = 0; i < numShips; i++){
                auto pos = util.generateRandomPos(gridWidth, gridHeight);
                entities.push_back(new Ship(get<0>(pos), get<1>(pos)));
            }
            for (int i = 0; i < numMines; i++){
                auto pos = util.generateRandomPos(gridWidth, gridHeight);
                entities.push_back(new Mine(get<0>(pos), get<1>(pos)));
            }

            return entities;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold){
           for (int iteration = 1; iteration <= maxIterations; ++iteration) {
                for (auto entity : entities) {
                    Ship* ship = dynamic_cast<Ship*>(entity);
                    if (ship) {
                        ship->move(1, 0);
                    }
                }
                for (auto secondEntity : entities) {
                    Ship* ship = dynamic_cast<Ship*>(secondEntity);
                    if (ship) {
                        for (auto thirdEntity : entities) {
                            Mine* mine = dynamic_cast<Mine*>(thirdEntity);
                            if (dynamic_cast<Mine*>(thirdEntity)) {
                                auto shipPos = dynamic_cast<Ship*>(secondEntity)->getPos();
                                auto minePos = dynamic_cast<Mine*>(thirdEntity)->getPos();
                                double distance = Utils::calculateDistance(shipPos, minePos);
                                if (distance <= mineDistanceThreshold) {
                                    Explosion explosion = mine->explode();
                                    explosion.apply(*ship);
                                }
                            }
                        }
                    }
                }
                bool allShipsDestroyed = true;
                for (auto entity : entities) {
                    if (dynamic_cast<Ship*>(entity)) {
                        allShipsDestroyed = false;
                        break;
                    }
                }
                if (allShipsDestroyed) {
                    std::cout << "All ships destroyed. Game over." << std::endl;
                    break;
                }
           }
        
        }

};


#endif