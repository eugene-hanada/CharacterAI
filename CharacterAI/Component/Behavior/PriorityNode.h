#pragma once
#include <list>
#include "BaseNode.h"
#include <memory>

// —Dæ“x‚ª‚ ‚éƒm[ƒh
class PriorityNode :
    public BaseNode
{
public:
    PriorityNode();
    ~PriorityNode();
    void Reset() override;
    State Execute(Object& obj) override;
    std::list<std::shared_ptr<BaseNode>> node_;
    std::list<std::shared_ptr<BaseNode>>::iterator exeItr_;
};

