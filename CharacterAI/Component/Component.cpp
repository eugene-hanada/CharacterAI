#include "Component.h"

Component::Component(const std::string& name, Object& owner) :
	owner_{owner}, name_{name}
{
}

Component::~Component()
{
}
