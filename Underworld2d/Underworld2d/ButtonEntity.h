#pragma once

#include "Entity.h"
#include "VisualComponent.h"
#include "ClickableComponent.h"
#include "ButtonComponent.h"

class Button : public Entity
{
public:
	Button()
	{
		this->addComponent<VisualComponent>();
		this->addComponent<ButtonComponent>();
		auto cc = this->addComponent<ClickableComponent>();
		cc->mode = TOGGLE;
	}

	void setClickMode(clickMode mode);
	void setInactiveTexture(sf::Texture* tex);
	void setHoverTexture(sf::Texture* tex);
	void setActiveTexture(sf::Texture* tex);
	void setClickButton(clickButton clickButtons);
	void addClickEvent();
	
};