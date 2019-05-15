#pragma once

#include "System.h"
#include <SFML/Graphics.hpp>
#include "PanoramicComponent.h"
#include "VisualComponent.h"

class PanoramicSystem : public System
{
public:
	void update(std::vector<Entity*> entities, float dt) override;
	void events(std::vector<Entity*> entities, sf::Event& event) override {};
};