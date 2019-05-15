#pragma once

#include <vector>
#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "GlobalSettings.h"


class System
{
public:
	virtual void update(std::vector<Entity*> entities ,float dt) = 0;
	virtual void events(std::vector<Entity*> entities, sf::Event& event) = 0;
};