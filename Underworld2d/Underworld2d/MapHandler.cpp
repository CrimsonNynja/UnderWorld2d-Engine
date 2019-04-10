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

		this->globalBounds.height = map.getBounds().height;
		this->globalBounds.width = map.getBounds().width;

		auto color = map.getBackgroundColour();
		this->backgroundColor = sf::Color(color.r, color.g, color.b, color.a);

		auto t = map.getTilesets();
		for (auto x : t)
		{
			this->tileSets[x.getName()] = TextureHandler::getInstance()->loadTexture(x.getImagePath());
		}

		return true;
	}
	return false;
}
