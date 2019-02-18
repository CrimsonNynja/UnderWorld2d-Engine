#pragma once

#include "Component.h"
#include <SFML/System/Vector2.hpp>

#ifdef DEBUG
#include "logger.h"
#include <iostream>
#endif


class PositionComponent : public Component
{
public:
	sf::Vector2f position;

	PositionComponent() : position(0, 0)
	{
		#ifdef DEBUG
		Logger::log("New Position component added with position of 0, 0", std::cout);
		#endif
	};
	PositionComponent(float x, float y) : position(x, y)
	{
		#ifdef DEBUG
		Logger::log("New Position component added", std::cout);
		#endif
	};
	PositionComponent(sf::Vector2f pos) : position(pos)
	{
		#ifdef DEBUG
		Logger::log("New Position component added", std::cout);
		#endif
	};
};