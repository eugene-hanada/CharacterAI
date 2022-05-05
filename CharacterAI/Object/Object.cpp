#include <DxLib.h>
#include "../Component/Component.h"
#include "Object.h"

Object::Object()
{
}

Object::~Object()
{
}

void Object::Update(void)
{
	auto func = [&](auto& vec, int input) {
		if (CheckHitKey(input))
		{
			pos_ += vec;
		}
	};
	func(Math::upVector2<float>, KEY_INPUT_UP);
	func(Math::downVector2<float>, KEY_INPUT_DOWN);
	func(Math::rightVector2<float>, KEY_INPUT_RIGHT);
	func(Math::leftVector2<float>, KEY_INPUT_LEFT);


	for (auto& comp : componentList_)
	{
		comp.second->Update();
	}
}

void Object::Draw(void)
{
	DrawCircle(pos_.x, pos_.y, 30, color_);
}

void Object::AddComponent(std::shared_ptr<Component>&& component)
{
	componentList_.emplace(component->name_, std::move(component));
}

void Object::RemoveComponent(const std::string& id)
{
}
