#pragma once
#include <memory>
#include "../Component.h"

class BaseNode;

class BehaviorTree :
	public Component
{
public:
	BehaviorTree(const std::string& name, Object& owner);
	~BehaviorTree();
	void Update(void) override;
	std::shared_ptr< BaseNode> rootNode_;
};

