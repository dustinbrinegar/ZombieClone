#include "Game.h"
#include <iostream>

Game::Game()
{
}
Game::~Game()
{

}
void Game::exit(sf::Window &window)
    {
        window.close();

    }

void Game::initialize()
{

}

void Game::pause()
{
    if( this->gameState != PLAYING )
        std::cout << "ERROR LINE 23 Game.cpp" << std::endl;

    gameState = PAUSED;

}



