#include "GameplayState.h"

void GameplayState::entered()
{
	this->bPaused = false;
}

void GameplayState::leaving()
{
	this->bPaused = true;
}

void GameplayState::update(float dt)
{
	if (this->bPaused == false)
	{
		
	}
}
