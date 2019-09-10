#pragma once

#include "Component.h"
#include "Entity.h"
#include <SFML/Graphics.hpp>

/*
Component to add text to the screen
*/
class TextComponent : public Component
{
public:
	sf::Font font;
	sf::Text text;
	bool bHidden;
	bool bAttachToEntity;
	sf::Vector2f drawOffset;

	TextComponent() :bHidden(false), bAttachToEntity(false), drawOffset(0, 0)
	{};
};