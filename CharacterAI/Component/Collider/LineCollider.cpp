#include "CircleCollider.h"
#include "LineCollider.h"

LineCollider::LineCollider(const std::function<void(void)>& func , const std::string& name,Object& owner) :
	Collider{func, name,owner}
{
}

LineCollider::~LineCollider()
{
}

void LineCollider::Update(void)
{
}

void LineCollider::Dispathc(Collider& col) const
{
	col.IsHit(*this);
}

void LineCollider::IsHit(const CircleCollider& col) const
{
	// “–‚½‚Á‚½Žž
	col.func_();
	this->func_();
}

void LineCollider::IsHit(const LineCollider& col) const
{
	// “–‚½‚Á‚½Žž
	col.func_();
	this->func_();
}
