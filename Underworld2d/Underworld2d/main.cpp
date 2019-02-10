#define DEBUG

#include <iostream>
#include <string>
#include "logger.h"

#include "Entity.h"
#include "healthComponent.h"
#include "LevelComponent.h"
#include "StatComponent.h"
#include "VisualComponent.h"
#include "StateManager.h"

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

int main()
{
	Logger::log("Engine Opened", std::cout);

	Entity e;
	e.addComponent<HealthComponent>(100, 75);
	e.addComponent<LevelComponent>(5, 100, 0, 8500);
	e.addComponent<StatComponent>(3, 10, 7, 2, 3);
	e.addComponent<VisualComponent>();

	sf::RenderWindow window(sf::VideoMode(600, 600), "Under World 2d Engine");
	StateManager stateManager;


	sf::Clock clock;
	while (window.isOpen())
	{
		sf::Time deltaTime = clock.restart();

		sf::Event event;
		while (window.pollEvent(event))
		{
			stateManager.handleEvents(event);

			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		stateManager.update(deltaTime.asSeconds());

		window.clear();
		stateManager.draw(window);
		window.display();
	}

	return 0;
}