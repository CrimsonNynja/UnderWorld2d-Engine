#pragma once

#include "Component.h"

#ifdef DEBUG
  #include "logger.h"
  #include <iostream>
#endif


class HealthComponent : public Component
{
public:
	int maxHealth;
	int currentHealth;

	HealthComponent() : maxHealth(0), currentHealth(0)
	{
		#ifdef DEBUG
		Logger::log("New Health component added with max and current health of 0", std::cout);
		#endif
	};
	HealthComponent(int max, int current) : maxHealth(max), currentHealth(current) 
	{ 
		#ifdef DEBUG
		Logger::log("New Health component added with max health: "+std::to_string(maxHealth)+" and current health: "+std::to_string(currentHealth), std::cout);
		#endif
	};
};