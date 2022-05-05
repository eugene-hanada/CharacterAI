#pragma once
#include <string>
#include "ComponentID.h"

class Object;

class Component
{
public:
	Component(const std::string& name,Object& owner);
	virtual ~Component();
	virtual void Update(void) = 0;
	Object& owner_;
	std::string name_;

};

