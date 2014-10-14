#ifndef WEAPON_H_INCLUDED
#define WEAPON_H_INCLUDED

#include "Projectile.h"

enum weapons
{
    BASIC_ATTACK
};

class Weapon: public Projectile
{
public:
    Weapon();

};



#endif // WEAPON_H_INCLUDED
