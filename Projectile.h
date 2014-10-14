#ifndef PROJECTILE_H_INCLUDED
#define PROJECTILE_H_INCLUDED

#include <SFML/Graphics.hpp>


class Projectile//: private Game
{
public:
    Projectile();
    ~Projectile();
private:
    sf::Sprite* projectileSprite;

};


#endif // PROJECTILE_H_INCLUDED
