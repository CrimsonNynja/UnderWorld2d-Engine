#pragma once

#include "State.h"
#include "Entity.h"
#include "VisualComponent.h"

class GameplayState : public State
{
public:
	GameplayState()
	{
		
	}
	void init() override {};
	void entered() override {};
	void leaving() override {};
	void update(float dt) override {};
	void events(sf::Event& event) {};
};