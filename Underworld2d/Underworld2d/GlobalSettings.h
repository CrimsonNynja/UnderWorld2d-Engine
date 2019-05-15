#pragma once

#include <SFML/System/Vector2.hpp>
#include <string>

struct GlobalSettings
{
	sf::Vector2f windowSize;
	bool vSync;
	bool fullScreen;

	static GlobalSettings* getInstance()
	{
		static GlobalSettings instance;
		return &instance;
	}

	GlobalSettings() : windowSize(600, 600), vSync(false), fullScreen(false)
	{};

	void loadSettingsFromFile(std::string filename);
	void saveSettingsToFile(std::string filename);
};