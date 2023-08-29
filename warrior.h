#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include "wizard.h"
#include "player.h"
using namespace std;

class Warrior: public Player {
    private:
        string weapon;
    public:
    Warrior(string name, int health, int damage, string weapon);
    string getName();
    int getHealth();
    string swingWeapon(Player*);
    void castSpell(Player* opponent);    
};
#endif