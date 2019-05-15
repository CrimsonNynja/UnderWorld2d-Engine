#include "DisplaySystem.h"

void DisplaySystem::draw(std::vector<Entity>& entities, sf::RenderWindow & window) const
{
	for (auto x: entities)
	{
		if (x.bHasComponent<VisualComponent>())
		{
			auto c = x.getComponent<VisualComponent>();
			//TODO move this out of every update call
			c->spr.setTexture(*c->texture);
			if (c->bHidden == false)
			{
				window.draw(c->spr);
			}
		}
	}
}
