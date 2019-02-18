#pragma once

#include <string>
#include "MapHandler.h"

class Level
{
public:
	void initialize();
	void save();
	void load();
	

private:
	std::string name;
	//map
	//objects  (for texture and resource loading)


};