#pragma once
#include <memory>
#include <concepts>
#include <unordered_map>
#include "../Common/Math.h"
#include "../Component/ComponentID.h"

class Component;

template<class T>
concept CompC = std::derived_from<T, Component>;

class Object
{
public:
	Object();
	~Object();

	void Update(void);
	void Draw(void);

	void AddComponent(std::shared_ptr<Component>&& component);
	void RemoveComponent(const std::string& name);

	template<CompC T>
	const std::shared_ptr<T> GetComponent(const std::string& name);
	Math::Vector2 pos_;
	int hp_ = 500;
	int color_ = 0xffffff;
private:
	std::unordered_map<std::string, std::shared_ptr<Component> > componentList_;
	
};

template<CompC T>
inline const std::shared_ptr<T> Object::GetComponent(const std::string& name)
{
	if (!componentList_.contains(name))
	{
		return nullptr;
	}
	return std::dynamic_pointer_cast<T>(componentList_[name]);
}
