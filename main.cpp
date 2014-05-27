#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Unit.h"
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "ZombieClone");
    Game game;

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                game.exit(window);

            switch (game.getGameState())
            {
                case MAIN_MENU:
                    break;
                case PLAYING:
                    break;
                case PAUSED:
                    break;
                case LOSE:
                    break;
                default:
                    std::cout << "Invalid Game State" << std::endl;

            }

        }



        window.clear();
        window.display();
    }

    return 0;
}
