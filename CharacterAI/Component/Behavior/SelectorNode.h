#pragma once
#include <memory>
#include <list>
#include "BaseNode.h"

class SelectorNode :
    public BaseNode
{
public:
    SelectorNode();
    ~SelectorNode();
    void Reset()  override;
    State Execute(Object& obj) override;
    std::list<std::shared_ptr<BaseNode>> list_;
    std::list<std::shared_ptr<BaseNode>>::iterator exeNode_;
};

