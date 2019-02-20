#pragma once

#include <SFML/Graphics.hpp>
#include "Component.h"

#ifdef DEBUG
#include "logger.h"
#include <iostream>
#endif

class VisualComponent : public Component
{
public:
	sf::Sprite Spr;
	sf::Texture* texture;	//figure out how this will work with animations later on
	bool bHidden;

	VisualComponent() :bHidden(false)
	{};
};