#pragma once

#include <SFML/Graphics.hpp>
#include "Component.h"

#ifdef DEBUG
#include "logger.h"
#include <iostream>
#endif

class PanoramicComponent : public Component
{
public:
	sf::Vector2f startPosition;
	float movementSpeed;
	sf::Vector2f lowerBounds;
	sf::Vector2f upperBounds;

	PanoramicComponent() : startPosition(0, 0), movementSpeed(1)
	{};
};