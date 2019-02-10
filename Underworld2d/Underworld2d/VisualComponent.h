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
	sf::Texture* texture;	//figure out how this will work with animations later on
	float scale;
	float rotation;
	sf::Color colorOverlay;
	float opacity;
	bool bHidden;

	VisualComponent() :
		texture(nullptr), scale(1.0f), rotation(0.0f), colorOverlay(NULL), opacity(255), bHidden(false)
	{
		#ifdef DEBUG
		Logger::log("New Visual component default values", std::cout);
		#endif
	};
	VisualComponent(sf::Texture* tex, float Scale, float rotation, sf::Color ColorOverlay, float Opacity, bool hidden) :
		texture(tex), scale(Scale), rotation(rotation), colorOverlay(ColorOverlay), opacity(Opacity), bHidden(hidden)
	{
		#ifdef DEBUG
		Logger::log("New Visual component added with custom values", std::cout);
		#endif
	};
};