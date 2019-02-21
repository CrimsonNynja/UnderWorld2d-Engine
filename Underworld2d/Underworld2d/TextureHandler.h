#pragma once

#include <map>
#include <SFML/Graphics.hpp>

//TODO mabee look at unloading texture if they can be detected as unused untill called

class TextureHandler
{
public:
	static TextureHandler& getInstance()
	{
		static TextureHandler instance;
		return instance;
	}

	TextureHandler(TextureHandler const&) = delete;
	void operator=(TextureHandler const&) = delete;


	sf::Texture* loadTexture(std::string fileName);
	sf::Texture* getTexture(std::string fileName);
	void unloadTexture(std::string fileName);

private:
	TextureHandler() {};
	
	std::map<std::string, sf::Texture> textures;

};