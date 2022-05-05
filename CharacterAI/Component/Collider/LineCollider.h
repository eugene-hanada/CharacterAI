#pragma once
#include "Collider.h"
class LineCollider :
    public Collider
{
public:
	LineCollider(const std::function<void(void)>& func, const std::string& name, Object& owner);
	virtual ~LineCollider();
private:
	void Update(void) override;
	void Dispathc(Collider& col)const override;
	void IsHit(const CircleCollider& col) const override;
	void IsHit(const LineCollider& col) const override;
};

