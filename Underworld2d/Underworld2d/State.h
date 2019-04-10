#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "DisplaySystem.h"
#include "TextureHandler.h"

/*
The Base State class
This is abstract, and forms the basis of any state the game may need
*/
class State
{
public:
	virtual void init() = 0;
	virtual void entered() = 0;
	virtual void leaving() = 0;
	virtual void update(float dt) = 0;
	virtual void events(sf::Event& event) = 0;
	virtual void setWindow(sf::RenderWindow& window)
	{
		this->window = &window;
	}
	virtual void draw(sf::RenderWindow& window)
	{
		displaySystem.draw(entities, window);
	}

protected:
	DisplaySystem displaySystem;
	sf::RenderWindow* window;
	std::vector<Entity> entities;

};