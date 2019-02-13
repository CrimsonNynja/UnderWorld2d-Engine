#include "MapHandler.h"

MapHandler::MapHandler(std::string file)
{
	this->loadMap(file);
}

bool MapHandler::loadMap(std::string file)
{
	if (this->map.load(file))
	{
		auto d = this->map.getTileSize();
		this->tileSize = sf::Vector2i(d.x, d.y);
		d = this->map.getTileCount();
		this->mapSize = sf::Vector2i(d.x, d.y);

		return true;
	}
	return false;
}
