#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include "Unit.h"
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Player: public Unit
{
public:
    void getInput(sf::Event event);
    void playerActions(sf::Event event, float elaspedTime);
    void movePlayer(sf::Event event);
    sf::Sprite* getSprite();
    Player();

private:
    //sf::Sprite playerSprite;
    //sf::Texture playerTexture;
};



#endif // PLAYER_H_INCLUDED
