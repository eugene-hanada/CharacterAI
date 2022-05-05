#pragma once
#include <list>
#include <memory>
#include "BaseNode.h"

// �V�[�N�G���X�m�[�h(���s�����炻�̎��_�ł�߂�)
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

