#pragma once
#include "BaseNode.h"

class ActionNode :
    public BaseNode
{
public:
    ActionNode();
    ~ActionNode();
    State Execute(Object& obj) override;
};

