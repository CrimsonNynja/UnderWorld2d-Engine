#pragma once

/*
The Base State class
This is abstract, and forms the basis of any state the game may need
*/
class State
{
public:
	virtual void init() = 0;
	virtual void entered() = 0;
	virtual void leaving() = 0;
	virtual void update(float dt) = 0;
	virtual void draw(/*sf::renderwindow*/) = 0;
};