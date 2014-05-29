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


};



#endif // PLAYER_H_INCLUDED
