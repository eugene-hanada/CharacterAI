#pragma once
#include <functional>
#include "../Component.h"

class CircleCollider;
class CapsuleCollider;
class BoxCollider;
class LineCollider;

class Collider :
	public Component
{
public:
	Collider(const std::function<void(void)>& func, const std::string& name, Object& owner);
	virtual ~Collider();
	virtual void Update(void) = 0;
	virtual void Dispathc(Collider& col)const = 0;
	virtual void IsHit(const CircleCollider& col) const = 0;
	virtual void IsHit(const LineCollider& col)  const = 0;
	std::function<void(void)> func_;
};

