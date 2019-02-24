#pragma once

#include "System.h"
#include "ClickableComponent.h"
#include "VisualComponent.h"
#include "ButtonComponent.h"

class ButtonSystem : public System
{
public:
	void update(std::vector<Entity*> entities, float dt) override;
	void events(std::vector<Entity*> entities, sf::Event& event) override;
};