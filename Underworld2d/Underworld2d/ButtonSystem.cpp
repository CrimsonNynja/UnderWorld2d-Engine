#include "ButtonSystem.h"

void ButtonSystem::update(std::vector<Entity*> entities, float dt)
{
}

void ButtonSystem::events(std::vector<Entity*> entities, sf::Event & event)
{
	for (auto x : entities)
	{
		if (x->bHasComponent<ClickableComponent>() == true && x->bHasComponent<VisualComponent>() == true && x->bHasComponent<ButtonComponent>() == true)
		{
			if (event.type == sf::Event::MouseMoved)
			{
				//hover logic here //need collisions
			}
			if (event.type == sf::Event::MouseButtonPressed)
			{
				auto clickable = x->getComponent<ClickableComponent>();
				//Left click
				if (clickable->clickButtons & LEFT_MOUSE_BUTTON == LEFT_MOUSE_BUTTON)
				{

				}
				//right click
				if (clickable->clickButtons & RIGHT_MOUSE_BUTTON == RIGHT_MOUSE_BUTTON)
				{

				}
				//middle click
				if (clickable->clickButtons & SCROLL_MOUSE_CLICKED == SCROLL_MOUSE_CLICKED)
				{

				}
				//click logic here
			}
		}
	}
}
