#pragma once

#include "System.h"
#include <SFML/Graphics.hpp>
#include "TextComponent.h"
#include "VisualComponent.h"
#include "GlobalSettings.h"

class TextSystem : public System
{
public:
	void update(std::vector<Entity*> entities, float dt) override;
	void events(std::vector<Entity*> entities, sf::Event& event) override {};
	void draw(std::vector<Entity>& entities, sf::RenderWindow& window) const;
};