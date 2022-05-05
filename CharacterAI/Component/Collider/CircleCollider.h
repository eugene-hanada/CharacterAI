#pragma once
#include "Collider.h"
class CircleCollider :
    public Collider
{
public:
	CircleCollider(const std::function<void(void)>& func, const std::string& name, Object& owner);
	virtual ~CircleCollider();
private:
	void Update(void) override;
	void Dispathc(Collider& col)const override;
	void IsHit(const CircleCollider& col) const override;
	void IsHit(const LineCollider& col) const override;
};

