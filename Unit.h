#ifndef UNIT_H_INCLUDED
#define UNIT_H_INCLUDED
#include <SFML/Graphics.hpp>

class Unit
{
public:
    int getHealth();
    void dealDamage(int damage);
    sf::Vector2f getMoveSpeed();
    void setMoveSpeed();
    int getDamage();
    void setDamage();
    void updatePosition();
protected:
    int health;
    sf::Vector2f moveSpeed;
    int damage;
    sf::Vector2f acceleration;
    sf::Sprite unit;
};



#endif // UNIT_H_INCLUDED
