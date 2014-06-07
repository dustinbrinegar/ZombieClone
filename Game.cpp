#include "Game.h"
#include <iostream>

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

    this->gameState = PAUSED;

}

gameStates Game::getGameState()
{
    return this->gameState;
}

void Game::setGameState(gameStates newGameState)
{
    this->gameState = newGameState;
}
void Game::setGameState(gameStates newGameState, Player& player)
{
    switch (newGameState)
    {
    case MAIN_MENU:
        break;
    case PLAYING:
        initializePlayingState(player);
        break;
    case PAUSED:
        break;
    case LOSE:
        break;
    default:
        std::cout << "new game state is invalid line 48 Game.cpp" << std::endl;

    }

    this->gameState = newGameState;
}

void Game::initializePlayingState(Player& player)
{
    if (this->getGameState() == MAIN_MENU)
        addObjToDraw(player.getSprite());
}

void Game::mainMenuState()
{


}

void Game::pausedState()
{

}

void Game::playingState(Player &player,sf::Event &event, float elaspedTime)
{
    player.playerActions(event, elaspedTime);
}

void Game::loseState()
{

}

void Game::addObjToDraw(sf::Sprite objToAdd)
{
    this->objToDraw.push_back(objToAdd);
}

void Game::drawSprites(sf::RenderWindow& window)
{
    for (unsigned int i = 0; i < this->objToDraw.size(); i++)
    {
        window.draw(this->objToDraw[i]);
    }

    this->objToDraw.clear();

}
