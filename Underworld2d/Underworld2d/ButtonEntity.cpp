#include "ButtonEntity.h"

void Button::setClickMode(clickMode mode)
{
	this->getComponent<ClickableComponent>()->mode = mode;
}

void Button::setInactiveTexture(sf::Texture* tex)
{
	this->getComponent<ButtonComponent>()->inactive = tex;
}

void Button::setHoverTexture(sf::Texture* tex)
{
	this->getComponent<ButtonComponent>()->hover = tex;
}

void Button::setActiveTexture(sf::Texture* tex)
{
	this->getComponent<ButtonComponent>()->active = tex;
}

void Button::setClickButton(clickButton clickButtons)
{
	this->getComponent<ClickableComponent>()->clickButtons = clickButtons;
}
