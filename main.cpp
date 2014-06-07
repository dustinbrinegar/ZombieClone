#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Unit.h"
#include <iostream>
#include "Player.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "ZombieClone");
    //window.setFramerateLimit();
    sf::Clock gameClock;
    sf::Clock frameClock;
    Game game;
    Player player;

    double frameRate;
    int frameCount = 0;

    game.setGameState(PLAYING, player); //to skip main menu while testing game. There is currently no main menu.

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
                    game.playingState(player, event, 1.0); //gameClock.getElapsedTime().asSeconds()
                    break;
                case PAUSED:
                    break;
                case LOSE:
                    break;
                default:
                    std::cout << "Invalid Game State" << std::endl;
            }
            gameClock.restart();

        }
       /* frameCount++;
        if (frameCount > 500 )
        {
            //frameRate = 1.0 / frameClock.getElapsedTime().asSeconds();
            //std::cout << "fps: " << frameRate << std::endl;
            frameCount = 0;
        } */

        frameClock.restart();
        player.updatePosition();
        game.addObjToDraw(player.getSprite());
        window.clear();
        std::cout << "player speedx: " << player.getMoveSpeed().x <<"speed y: " << player.getMoveSpeed().y << std::endl;
        game.drawSprites(window);
        window.display();
    }

    return 0;
}
