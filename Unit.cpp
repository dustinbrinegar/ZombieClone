#include "Unit.h"
#include <iostream>

void Unit::updatePosition()
{
    unit->move(moveSpeed);
}

sf::Vector2f Unit::getMoveSpeed()
{
    return this->moveSpeed;
}

Unit::Unit()
{
   // this->unitTexture.loadFromFile("Player.png");
   // this->unit.setTexture(unitTexture);
   // this->unit.setPosition(400,300);
   // this->unit.scale(.33,.33); //original texture is too large.
}
