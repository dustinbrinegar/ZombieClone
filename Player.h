#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Unit.h"
#include "PlayerWeapons.h"


class Player: private Unit
{
public:
    void getInput(sf::Event event);
    void playerActions(sf::Event event, float elaspedTime);
    void movePlayer(sf::Event event, float elaspedTime);
    void playerShoot();
    sf::Sprite* getSprite();
    void setCurrentAttack(weapons);
    weapons getCurrentAttack();
    Player();

private:
    PlayerWeapons* weapon;
};



#endif // PLAYER_H_INCLUDED
