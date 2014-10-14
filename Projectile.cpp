#include "Projectile.h"
#include "Game.h"


Projectile::Projectile()
{

}

Projectile::~Projectile()
{
    delete(projectileSprite);
}

