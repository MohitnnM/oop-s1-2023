#ifndef WIZARD_H
#define WIZARD_H
#include <iostream>
#include "warrior.h"
#include "player.h"
using namespace std;

class Wizard: public Player {
    private:
        int mana;
    public:
    Wizard(string name, int health, int damage, int mana);
    string getName();
    int getHealth();
    void castSpell(Player* opponent);    
};
#endif