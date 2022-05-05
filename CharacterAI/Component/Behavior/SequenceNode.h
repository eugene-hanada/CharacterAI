#pragma once
#include <list>
#include <memory>
#include "BaseNode.h"

// シークエンスノード(失敗したらその時点でやめる)
class SequenceNode :
    public BaseNode
{
public:
    SequenceNode();
    ~SequenceNode();
    void Reset()  override;
    State Execute(Object& obj) override;

    std::list<std::shared_ptr<BaseNode>> list_;
    std::list<std::shared_ptr<BaseNode>>::iterator exeNode_;
};

