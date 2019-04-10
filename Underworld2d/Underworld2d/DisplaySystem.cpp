#include "DisplaySystem.h"

void DisplaySystem::draw(std::vector<Entity>& entities, sf::RenderWindow & window) const
{
	for (auto x: entities)
	{
		if (x.bHasComponent<VisualComponent>())
		{
			auto c = x.getComponent<VisualComponent>();
			c->spr.setTexture(*c->texture);	//this probably should not be done every update frame, will be fine for testing though
			if (c->bHidden == false)
			{
				window.draw(c->spr);
			}
		}
	}
}
