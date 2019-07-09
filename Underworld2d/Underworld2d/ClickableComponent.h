#pragma once

#include "Component.h"

#ifdef DEBUG
#include "logger.h"
#include <iostream>
#endif

enum clickMode {
	SINGLE_CLICK = 0,
	TOGGLE,
	MOUSE_HOLD
};

enum clickButton {
	LEFT_MOUSE_BUTTON = 1,//1
	RIGHT_MOUSE_BUTTON = 2,//10
	SCROLL_MOUSE_CLICKED = 4//100
};

class ClickableComponent : public Component
{
public:
	/* wheather this has been clicked or not */
	bool bClicked;
	clickMode mode;
	unsigned short clickButtons;

	ClickableComponent(clickMode clickMode, bool clicked, unsigned short clickButtons) : mode(clickMode), bClicked(clicked), clickButtons(clickButtons)
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