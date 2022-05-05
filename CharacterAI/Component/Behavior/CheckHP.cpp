#include "../../Object/Object.h"
#include "CheckHP.h"

CheckHP::CheckHP()
{
}

CheckHP::~CheckHP()
{
}

State CheckHP::Execute(Object& obj)
{
	if (obj.hp_ <= 0)
	{
		return State::Success;
	}
	return State::Faild;
}
