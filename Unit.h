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
    sf::Sprite getSprite();
    Unit();

protected:
    int health;
    sf::Vector2f moveSpeed;
    int damage;
    sf::Vector2f acceleration;
    sf::Sprite unit;
    sf::Texture unitTexture;
};



#endif // UNIT_H_INCLUDED
