#include "Game.h"
#include <iostream>
#include "Player.h"

Game::Game()
{
    this->gameState = MAIN_MENU;
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

gameStates Game::getGameState()
{
    return this->gameState;
}

void Game::setGameState(gameStates newGameState)
{
    this->gameState = newGameState;
}

void Game::mainMenuState()
{


}

void Game::pausedState()
{

}

/*void Game::playingState(Player &player,sf::Event &event)
{
    player.getInput(event);
} */

void Game::loseState()
{

}
