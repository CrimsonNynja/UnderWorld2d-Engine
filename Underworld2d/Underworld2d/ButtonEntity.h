#pragma once

#include "Entity.h"
#include "VisualComponent.h"
#include "ClickableComponent.h"
#include "ButtonComponent.h"

class Button : public Entity
{
public:
	Button();
	void setClickMode(clickMode mode);
	void setInactiveTexture(sf::Texture* tex);
	void setHoverTexture(sf::Texture* tex);
	void setActiveTexture(sf::Texture* tex);
	void setClickButton(clickButton clickButtons);
	void addClickEvent();
	
};