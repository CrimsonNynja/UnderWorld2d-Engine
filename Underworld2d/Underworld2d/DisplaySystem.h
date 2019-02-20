#pragma once

#include "System.h"
#include <SFML/Graphics.hpp>
#include "VisualComponent.h"

class DisplaySystem : public System
{
public:
	void update(std::vector<Entity*> entities, float dt) override {};
	void events(std::vector<Entity*> entities, sf::Event& event) override {};
	void draw(std::vector<Entity>& entities, sf::RenderWindow& window) const;
};