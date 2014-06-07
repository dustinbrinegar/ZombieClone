#include "Unit.h"
#include <iostream>

void Unit::updatePosition()
{
    std::cout << "do we get here?\n";
    unit.move(moveSpeed); //this does not change the sprite position even though it should.
    //playerSprite.move(moveSpeed);
}

sf::Vector2f Unit::getMoveSpeed()
{
    return this->moveSpeed;
}
