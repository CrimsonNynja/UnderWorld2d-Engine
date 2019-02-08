//#define DEBUG

#include <iostream>
#include <string>
#include "logger.h"

#include "Entity.h"
#include "healthComponent.h"
#include "LevelComponent.h"
#include "StatComponent.h"


int main()
{
	Logger::log("Engine Opened", std::cout);

	Entity e;
	e.addComponent<HealthComponent>(100, 75);
	e.addComponent<LevelComponent>(5, 100, 0, 8500);
	e.addComponent<StatComponent>(3, 10, 7, 2, 3);

	std::string i;
	std::cin >> i;
	return 0;
}