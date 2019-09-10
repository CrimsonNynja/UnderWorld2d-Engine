#include "ButtonEntity.h"

Button::Button()
{
	auto visualComponent = this->addComponent<VisualComponent>();
	auto buttonComponent = this->addComponent<ButtonComponent>();
	visualComponent->texture = buttonComponent->inactive;
	auto clickableComponent = this->addComponent<ClickableComponent>();
	clickableComponent->mode = TOGGLE;
	auto textComponent = this->addComponent<TextComponent>();
	textComponent->bAttachToEntity = true;
}

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

void Button::addClickEvent(std::function<void(void)> event)
{
	this->getComponent<ButtonComponent>()->event = event;
}

std::string Button::getButtonText()
{
	return this->getComponent<TextComponent>()->text.getString();
}

bool Button::isClicked()
{
	if (this->getComponent<ButtonComponent>()->active == this->getComponent<VisualComponent>()->texture)
	{
		return true;
	}
	return false;
}
