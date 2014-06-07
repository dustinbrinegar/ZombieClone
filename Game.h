#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <vector>
#include "Player.h"

enum gameStates
{
    MAIN_MENU, PLAYING, PAUSED, LOSE
};

//sf::RenderWindow window(sf::VideoMode(800, 600), "ZombieClone");


class Game
{
public:
    void start();
    void exit(sf::Window &window);
    void initialize();
    void toMainMenu();
    void pause();
    gameStates getGameState();
    void setGameState(gameStates newState);
    void setGameState(gameStates newState, Player& player);
    void initializePlayingState( Player& player);
    void mainMenuState();
    void pausedState();
    void playingState(Player &player,sf::Event &event, float elaspsedTime);
    void loseState();
    void addObjToDraw(sf::Sprite);
    void drawSprites(sf::RenderWindow& window);
    Game();
    ~Game();
private:
    gameStates gameState;
    std::vector<sf::Sprite> objToDraw;


};





#endif // GAME_H_INCLUDED
