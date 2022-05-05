#include "../../Object/Object.h"
#include "ActionNode.h"


ActionNode::ActionNode() 
{
}

ActionNode::~ActionNode()
{
}

State ActionNode::Execute(Object& obj)
{
	obj.color_ = 0xff0000;
	return State::Success;
}


