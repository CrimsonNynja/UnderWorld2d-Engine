#pragma once

#include "Component.h"

#ifdef DEBUG
#include "logger.h"
#include <iostream>
#endif


class LevelComponent : public Component
{
public:
	int currentLevel;
	int maxLevel;
	unsigned currentExp;
	unsigned expNeeded;

	LevelComponent() : 
		currentLevel(1), maxLevel(1), currentExp(0), expNeeded(100)
	{
		#ifdef DEBUG
		Logger::log("New Level component default values", std::cout);
		#endif
	};
	LevelComponent(int current, int max, unsigned currentE, unsigned needed) : 
		currentLevel(current), maxLevel(max), currentExp(currentE), expNeeded(needed)
	{
		#ifdef DEBUG
		Logger::log("New Level component added with custom values", std::cout);
		#endif
	};
};