#include "SequenceNode.h"
#include "ActionNode.h"
#include "CheckHP.h"
#include "BehaviorTree.h"


BehaviorTree::BehaviorTree(const std::string& name, Object& owner) :
	Component{name,owner}
{
	rootNode_ = std::make_shared<SequenceNode>();
	auto&& t = std::dynamic_pointer_cast<SequenceNode>(rootNode_);
	t->list_.emplace_back(std::make_shared<CheckHP>());
	t->list_.emplace_back(std::make_shared<ActionNode>());
	rootNode_->Reset();
}

BehaviorTree::~BehaviorTree()
{
}

void BehaviorTree::Update(void)
{
	if (rootNode_->Execute(owner_) != State::NowExe)
	{
		rootNode_->Reset();
	}
}
