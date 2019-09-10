#include "TextSystem.h"

void TextSystem::update(std::vector<Entity*> entities, float dt)
{
	for (auto x: entities)
	{
		auto c = x->getComponent<TextComponent>();
		sf::Vector2f position = c->text.getPosition();
		if (c->bAttachToEntity == true && x->bHasComponent<VisualComponent>())
		{
			position = x->getComponent<VisualComponent>()->spr.getPosition();
		}
		c->text.setPosition(position + c->drawOffset);
	}
}

void TextSystem::draw(std::vector<Entity>& entities, sf::RenderWindow & window) const
{
	for (auto x: entities)
	{
		if (x.bHasComponent<TextComponent>())
		{
			auto c = x.getComponent<TextComponent>();
			if (c->bHidden == false)
			{
				window.draw(c->text);
			}
		}
	}
}
