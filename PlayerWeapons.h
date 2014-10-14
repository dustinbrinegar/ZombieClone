#ifndef PLAYERWEAPONS_H_INCLUDED
#define PLAYERWEAPONS_H_INCLUDED

#include "Weapon.h"


class PlayerWeapons: public Weapon
{
public:
    void shoot(weapons weapon);
    PlayerWeapons();
};


#endif // PLAYERWEAPONS_H_INCLUDED
