#include "Player.h"

void Player::playerActions(sf::Event event, float elaspedTime)
{
    elaspedTime = (elaspedTime < 0.005 ) ? 0.005 : elaspedTime;

    if (event.type == sf::Event::KeyPressed)
    {
        movePlayer(event, elaspedTime);
    }

    if (event.type == sf::Event::MouseButtonPressed && sf::Mouse::isButtonPressed(sf::Mouse::Left));
        weapon->shoot(this->getCurrentAttack());
}

void Player::movePlayer(sf::Event event, float elaspedTime)
{
    switch(event.key.code)
        {
            case sf::Keyboard::W:
                unit->move(0, -moveSpeed.y*elaspedTime);
                break;

            case sf::Keyboard::S:
                unit->move(0, moveSpeed.y*elaspedTime);
                break;

            case sf::Keyboard::A:
                unit->move(-moveSpeed.x*elaspedTime, 0);
                break;

            case sf::Keyboard::D:
                unit->move(moveSpeed.x*elaspedTime, 0);
                break;
            default:
                break;
        }
}

sf::Sprite* Player::getSprite()
{
    return unit;
}

void Player::setCurrentAttack(weapons newWeapon)
{
    this->currentAttack = newWeapon;
}

weapons Player::getCurrentAttack()
{
    return this->currentAttack;
}

void Player::playerShoot()
{
    weapon->shoot(this->getCurrentAttack());
}

Player::Player()
{
    //acceleration.x = .05;
    //acceleration.y = .05;

    weapon = new PlayerWeapons;

    this->moveSpeed.x = 5000;
    this->moveSpeed.y = 5000;

    this->setCurrentAttack(BASIC_ATTACK);

    this->unit = new sf::Sprite;
    this->unitTexture.loadFromFile("Player.png"); //unit refers to the sprite from Unit.h since player inherits from unit.
    this->unit->setTexture(unitTexture);
    this->unit->setPosition(400,300);
    this->unit->scale(.33,.33); //original texture is too large dimensionally.
}
