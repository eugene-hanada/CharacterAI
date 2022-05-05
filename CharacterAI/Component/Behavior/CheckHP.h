#pragma once
#include "BaseNode.h"
class CheckHP :
    public BaseNode
{
public:
    CheckHP();
    ~CheckHP();
    State Execute(Object& obj) override;
};

