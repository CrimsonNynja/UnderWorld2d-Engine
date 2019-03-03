#pragma once

#include <string>
#include <map>

#include <tmxlite/Map.hpp>
#include <tmxlite/Layer.hpp>

#include <SFML/Graphics.hpp>

#include "TextureHandler.h"

//TODO this should load the map, anddisplay it in chunks to save on runtime memory
class MapHandler
{
public:
	MapHandler() {};
	MapHandler(std::string file);

	/* loads the given tmx file into the the tmx::map and sets the map property variables */
	bool loadMap(std::string file);

	/* sets the size of a chunk */
	void setChunkSize(sf::Vector2f);
	void setChunkSize(float x, float y);

//private:
	/* the loaded tmx map instance */
	tmx::Map map;

	//unsigned tmxVersion;

	/* The size of the map in tile units, width x height */
	sf::Vector2i mapSize;
	/* The size of the tile in pixels, width x height */
	sf::Vector2i tileSize;

	unsigned tileCount;

	sf::Color backgroundColor;

	/* the size of a chunk in tile units, width x height */
	sf::Vector2f chunkSize;
	/* The number of chunks in the map */
	unsigned chuckCount;

	/* the global bounds of the map, where it starts and ends */
	sf::FloatRect globalBounds;

	std::map<std::string, sf::Texture*> tileSets;

};