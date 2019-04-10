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
	sf::Sprite spr;
	sf::Texture* texture;	//figure out how this will work with animations later on
	std::string textureSource;
	bool bHidden;
	int drawLayer;

	VisualComponent() :bHidden(false), drawLayer(0)
	{};
};