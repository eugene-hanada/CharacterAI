#include "Collider.h"

Collider::Collider(const std::function<void(void)>& func, const std::string& name, Object& owner) :
	func_{func}, Component{name,owner}
{
}

Collider::~Collider()
{
}


