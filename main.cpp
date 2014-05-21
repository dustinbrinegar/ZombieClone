#include <SFML/Graphics.hpp>
#include "Game.h"
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
        }

        window.clear();
        window.display();
    }

    return 0;
}
