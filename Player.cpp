#include "Player.h"
#include <iostream>
Player player;

void Player::playerActions(sf::Event event, float elaspedTime)
{
    sf::Vector2f pos = unit->getPosition();

    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::W && (moveSpeed.y <= 1.5 || moveSpeed.y >= -1.5)) //todo: add a single if statement for keypressed and then a switch statement for rest.
    {
        //this->moveSpeed.y -= this->acceleration.y;
        unit->move(0,-this->moveSpeed.y);
    }

    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S && (moveSpeed.y <= 1.5 || moveSpeed.y >= -1.5))
    {
        //this->moveSpeed.y += this->acceleration.y;
        unit->move(0,this->moveSpeed.y);
    }

    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::A && (moveSpeed.x <= 1.5 || moveSpeed.x >= -1.5))
    {
        //this->moveSpeed.x -= this->acceleration.x;
        unit->move(-this->moveSpeed.x,0);
    }

    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::D && (moveSpeed.x <= 1.5 || moveSpeed.x >= -1.5))
    {
        //this->moveSpeed.x += this->acceleration.x;
        unit->move(this->moveSpeed.x,0);
    }

}

void Player::movePlayer(sf::Event event)
{

}

sf::Sprite* Player::getSprite()
{
    return unit;
}



Player::Player()
{
    //acceleration.x = .05;
    //acceleration.y = .05;

    this->moveSpeed.x = 5;
    this->moveSpeed.y = 5;
    this->unitTexture.loadFromFile("Player.png");
    this->unit->setTexture(unitTexture);
    this->unit->setPosition(400,300);
    this->unit->scale(.33,.33); //original texture is too large.
}
