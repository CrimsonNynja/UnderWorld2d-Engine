#pragma once

#include "Component.h"

#ifdef DEBUG
#include "logger.h"
#include <iostream>
#endif


class StatComponent : public Component
{
public:
	int strength;
	int intellect;
	int agility;
	int charisma;
	int luck;

	StatComponent() :
		strength(5), intellect(5), agility(5), charisma(5), luck(5)
	{
		#ifdef DEBUG
		Logger::log("New Stat component default values", std::cout);
		#endif
	};
	StatComponent(int Strength, int Intellect, unsigned Agility, unsigned Charisma, int Luck) :
		strength(Strength), intellect(Intellect), agility(Agility), charisma(Charisma), luck(Luck)
	{
		#ifdef DEBUG
		Logger::log("New Stat component added with custom values", std::cout);
		#endif
	};
};