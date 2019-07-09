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
}
