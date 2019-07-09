#pragma once

#include "Component.h"
#include <SFML/Graphics.hpp>

/*
Component to add text to the screen
*/
class TextComponent : public Component
{
public:
	sf::Font font;
	float fontSize;
	float fontRotation;
	sf::Color fontColor;
	sf::Vector2f drawPosition;
	sf::Text text;
	bool bHidden;
	std::string string;
	bool bAttachToEntity;
	sf::Vector2f drawOffset;
};