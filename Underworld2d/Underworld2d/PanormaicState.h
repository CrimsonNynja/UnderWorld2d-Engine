#pragma once

#pragma once

#include "State.h"
#include "Entity.h"
#include "VisualComponent.h"
#include "PanoramicComponent.h"

class PanoramicState : public State
{
public:
	void init() override;
	void entered() override {};
	void leaving() override {};
	void update(float dt) override;
	void events(sf::Event& event) override {};

private:
	bool bPaused = false;
};
