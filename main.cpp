#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Unit.h"
#include <iostream>
#include "Player.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "ZombieClone");
    Game game;
    Player player;

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
                    game.playingState(player, event);
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
