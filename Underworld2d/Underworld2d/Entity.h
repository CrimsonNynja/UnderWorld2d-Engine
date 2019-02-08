#pragma once

#include <array>
#include <bitset>
#include "Component.h"

#define MAX_COMPONENTS 32

class Entity
{
public:
	template <typename T, typename ...TArgs>
	T* addComponent(TArgs... args);

	template <typename T>
	bool bHasComponent() const;

	template <typename T>
	T* getComponent();

	template <typename T>
	void deleteComponent();

protected:
	std::array<Component*, MAX_COMPONENTS> components;
	std::bitset<MAX_COMPONENTS> componentFlags;
};


inline unsigned getComponentID()
{
	static unsigned componentID = 0;
	return componentID++;
}

template <typename T>
inline unsigned getComponentID() const
{
	static unsigned componentID = getComponentID();
	return componentID;
}

template <typename T, typename ...TArgs>
inline T* Entity::addComponent(TArgs... args)
{
	T* component(new T(std::forward<TArgs>(args)...));
	component->owner = this;

	components[getComponentID<T>()] = component;
	componentFlags[getComponent<T>()] = true;

	return component;
}

template <typename T>
inline bool Entity::bHasComponent() const
{
	return componentFlags[getComponent<T>()];
}

template <typename T>
inline T* Entity::getComponent()
{
	auto p(components[getComponentID<T>()]);
	return static_cast<T*>(p);
}

template <typename T>
inline void Entity::deleteComponent()
{
	components[getComponentID<T>()] = nullptr;
	componentFlags[getComponentID<T>()] = false;
}