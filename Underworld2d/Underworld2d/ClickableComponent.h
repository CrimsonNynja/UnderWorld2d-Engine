#pragma once

#include "Component.h"

#ifdef DEBUG
#include "logger.h"
#include <iostream>
#endif

enum clickMode {
	SINGLE_CLICK = 0,
	TOGGLE,
	MOUSE_HELD
};

class ClickableComponent : public Component
{
public:
	/* wheather this has been clicked or not */
	bool clicked;
	clickMode mode;

	ClickableComponent()
	{
		#ifdef DEBUG
		Logger::log("New Clickable component added", std::cout);
		#endif
	};
	ClickableComponent()
	{
		#ifdef DEBUG
		Logger::log("New Clickable component added", std::cout);
		#endif
	};
};