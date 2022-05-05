#include "../../Object/Object.h"
#include "LineCollider.h"
#include "CircleCollider.h"


CircleCollider::CircleCollider(const std::function<void(void)>& func, const std::string& name,Object& owner) :
	Collider{func, name,owner}
{
}

CircleCollider::~CircleCollider()
{
}

void CircleCollider::Update(void)
{
}

void CircleCollider::Dispathc(Collider& col) const
{
	col.IsHit(*this);
}

void CircleCollider::IsHit(const CircleCollider& col) const
{
	float distance = (col.owner_.pos_ - owner_.pos_).SqMagnitude();
	if (distance < Math::Square(60.0f))
	{
		// “–‚½‚Á‚½Žž
		col.func_();
		this->func_();
	}
}

void CircleCollider::IsHit(const LineCollider& col) const
{
	// “–‚½‚Á‚½Žž
	col.func_();
	this->func_();
}
