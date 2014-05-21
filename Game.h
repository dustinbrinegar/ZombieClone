#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

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

    Game();
    ~Game();
private:
    gameStates gameState;
   // sf::RenderWindow window(sf::VideoMode(800, 600), "ZombieClone");

};





#endif // GAME_H_INCLUDED
