#define DEBUG

#include <iostream>
#include <string>
#include "logger.h"

#include "TextureHandler.h"
#include "GlobalSettings.h"
#include "Entity.h"
#include "healthComponent.h"
#include "LevelComponent.h"
#include "StatComponent.h"
#include "VisualComponent.h"

#include "GameplayState.h"
#include "StateManager.h"
#include "MapHandler.h"

#include "ButtonEntity.h"

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "PanormaicState.h"

void test()
{
	std::cout << "YO";
}

int main()
{
	TextureHandler::getInstance();
	GlobalSettings::getInstance();
	Logger::log("Engine Opened", std::cout);

	//panormaic test
	TextureHandler::getInstance()->loadTexture("C:\\Users\\hudoc\\Desktop\\images\\bubble.png");
	TextureHandler::getInstance()->loadTexture("C:\\Users\\hudoc\\Desktop\\images\\fish.png");
	TextureHandler::getInstance()->loadTexture("C:\\Users\\hudoc\\Desktop\\images\\ground0.png");
	TextureHandler::getInstance()->loadTexture("C:\\Users\\hudoc\\Desktop\\images\\ground0-5.png");
	TextureHandler::getInstance()->loadTexture("C:\\Users\\hudoc\\Desktop\\images\\ground1.png");
	TextureHandler::getInstance()->loadTexture("C:\\Users\\hudoc\\Desktop\\images\\ground2.png");

	/*Entity e;
	e.addComponent<HealthComponent>(100, 75);
	e.addComponent<LevelComponent>(5, 100, 0, 8500);
	e.addComponent<StatComponent>(3, 10, 7, 2, 3);
	e.addComponent<VisualComponent>();*/

	/*sf::Texture tex;
	tex.loadFromFile("C:\\Users\\hudoc\\Desktop\\CheckBoxTextIA.png");
	Entity e;
	e.addComponent<VisualComponent>()->texture = &tex;*/
	//e.getComponent<VisualComponent>()->texture->loadFromFile("C:\\Users\\hudoc\\Desktop\\CheckBoxTextIA.png");

	//MapHandler map("C:\\Users\\hudoc\\Desktop\\orthogonalOutside.tmx");
	//Logger::log("map Size: " + std::to_string(map.mapSize.x) + ", " + std::to_string(map.mapSize.y) , std::cout);

	sf::RenderWindow window(sf::VideoMode(600, 600), "Under World 2d Engine");
	Button button;
	button.addClickEvent(&test);

	GameplayState gameplayState;
	PanoramicState panoramicState;
	StateManager stateManager(window);
	//stateManager.pushState(&gameplayState);
	stateManager.pushState(&panoramicState);

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
		/*for (auto x: map.tileSets)
		{
			sf::Sprite s;
			s.setTexture(*x.second);
			window.draw(s);
		}*/
		window.display();
	}

	return 0;
}