#include "PanoramicSystem.h"

void PanoramicSystem::update(std::vector<Entity*> entities, float dt)
{	
	GlobalSettings* settings = GlobalSettings::getInstance();
	for (auto x: entities)
	{
		if (x->bHasComponent<PanoramicComponent>() && x->bHasComponent<VisualComponent>())
		{
			//mouse, and centerpoint need to be solved
			auto p = x->getComponent<PanoramicComponent>();
			auto v = x->getComponent<VisualComponent>();
			float deltaX = -((p->centerPoint.x - (settings->windowSize.x / 2)) / settings->windowSize.x) * 100;
			float deltaY = -((p->centerPoint.y - (settings->windowSize.y / 2)) / settings->windowSize.y) * 100;
			v->spr.setPosition(p->startPosition.x + (deltaX * p->movementSpeed),
							   p->startPosition.y + (deltaY * p->movementSpeed));
		}
	}
	
	/*
	float mouseX = sf::Mouse::getPosition(*this->window).x;
	float mouseY = sf::Mouse::getPosition(*this->window).y;

	//shoudl get the center point dynamically, hard coded for now
	float xDiff = -(((mouseX - 300) / 600) * 100);
	float yDiff = -(((mouseY - 300) / 600) * 100);

	for (auto x : this->entities)
	{
		auto p = x.getComponent<PanoramicComponent>();
		auto v = x.getComponent<VisualComponent>();
		v->spr.setPosition(p->startPosition.x + (xDiff * p->movementSpeed), p->startPosition.y + (yDiff * p->movementSpeed));
	}//*/

}
