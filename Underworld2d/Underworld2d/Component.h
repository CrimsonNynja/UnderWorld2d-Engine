#pragma once

class Entity;

class Component
{
public:
	Component() {};

	Entity* owner = nullptr;
};