#include "TextSystem.h"

void TextSystem::draw(std::vector<Entity>& entities, sf::RenderWindow & window) const
{
	for (auto x: entities)
	{
		if (x.bHasComponent<TextComponent>())
		{
			auto c = x.getComponent<TextComponent>();
			if (c->bHidden == false)
			{
				sf::Vector2f position = c->drawPosition;
				if (c->bAttachToEntity == true && x.bHasComponent<VisualComponent>())
				{
					position = x.getComponent<VisualComponent>()->spr.getPosition();
				}
				c->text.setPosition(position + c->drawOffset);
				window.draw(c->text);
			}
		}
	}
}
