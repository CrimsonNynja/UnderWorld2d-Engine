#pragma once

#include "Component.h"
#include <SFML/Graphics.hpp>

class ButtonComponent : public Component
{
public:
	sf::Texture* dissabled;	//add in later, for when there is no clickable component
	sf::Texture* inactive;
	sf::Texture* hover;
	sf::Texture* active;
	bool bClickable;
	//function to run when clicked?
};