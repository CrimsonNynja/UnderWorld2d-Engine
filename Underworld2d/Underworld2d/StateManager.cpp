#include "StateManager.h"

void StateManager::pushState(State * state)
{
	this->states.push(state);
}

State* StateManager::popState()
{
	if (this->states.size() > 0)
	{
		State* top = this->states.top();
		this->states.pop();
		return top;
	}
	else
	{
		#ifdef DEBUG
		Logger::log("Error, popState has no states to pop", std::cout);
		#endif
		return nullptr;
	}
}

State * StateManager::peekState()
{
	return this->states.top();
}

void StateManager::draw(sf::RenderWindow & window)
{
	if (this->states.size() > 0)
	{
		this->states.top()->draw(window);
	}
}

void StateManager::handleEvents(sf::Event & event)
{
	if (this->states.size() > 0)
	{
		this->states.top()->events(event);
	}
}

void StateManager::update(float dt)
{
	if (this->states.size() > 0)
	{
		this->states.top()->update(dt);
	}
}