#include "TextureHandler.h"

sf::Texture* TextureHandler::loadTexture(std::string fileName)
{
	textures[fileName].loadFromFile(fileName);
	return &textures[fileName];
}

sf::Texture* TextureHandler::getTexture(std::string fileName)
{
	return &textures[fileName];
}

void TextureHandler::unloadTexture(std::string fileName)
{
	textures.erase(fileName);
}
