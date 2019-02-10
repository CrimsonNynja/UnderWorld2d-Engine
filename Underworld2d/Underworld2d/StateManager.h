#pragma once

#include <stack>
#include <SFML/Graphics.hpp>
#include "State.h"

#ifdef DEBUG
#include "logger.h"
#include <iostream>
#endif

class StateManager
{
public:
	void pushState(State* state);
	State* popState();
	State* peekState();

	void draw(sf::RenderWindow& window);
	void handleEvents(sf::Event& event);
	void update(float dt);

private:
	std::stack<State*> states;

};