#pragma once

#include <stack>
#include "State.h"

class StateManager
{
public:
	void pushState(State* state);
	State* popState();
	State* peekState();

	void draw(/*sf render window*/);
	void update(float dt);

private:
	std::stack<State*> states;

};