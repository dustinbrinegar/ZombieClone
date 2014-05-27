#ifndef UNIT_H_INCLUDED
#define UNIT_H_INCLUDED
#include <SFML/Graphics.hpp>

class Unit
{
public:
    int getHealth();
    void dealDamage(int damage);
    int getMoveSpeed();
    void setMoveSpeed();
    int getDamage();
    void setDamage();
protected:
    int health;
    int moveSpeed;
    int damage;
};



#endif // UNIT_H_INCLUDED
