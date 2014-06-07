#include "Player.h"
#include <iostream>
Player player;

void Player::playerActions(sf::Event event, float elaspedTime)
{
    sf::Vector2f pos = playerSprite.getPosition();
    std::cout << pos.x << " " << pos.y << std::endl;
   if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::W)
    {
        this->moveSpeed.y -= this->acceleration.y;
    }

    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S)
        this->moveSpeed.y += this->acceleration.y;

    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::A)
        this->moveSpeed.x -= this->acceleration.x;

    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::D)
        this->moveSpeed.x += this->acceleration.x;
    playerSprite.move(moveSpeed);

}

void Player::movePlayer(sf::Event event)
{

}

sf::Sprite Player::getSprite()
{
    return playerSprite;
}



Player::Player()
{
    acceleration.x = .05;
    acceleration.y = .05;
    this->playerTexture.loadFromFile("Player.png");
    this->playerSprite.setTexture(playerTexture);
    this->playerSprite.setPosition(400,300);
    this->playerSprite.scale(.33,.33); //original texture is too large.
}
