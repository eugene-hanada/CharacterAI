#include <algorithm>
#include "PriorityNode.h"

PriorityNode::PriorityNode()
{
}

PriorityNode::~PriorityNode()
{
}

void PriorityNode::Reset()
{
    // �D��x����sort
    node_.sort();

    // �D��x�̈�ԍ����q�m�[�h���Z�b�g
    exeItr_ = node_.begin();
}



State PriorityNode::Execute(Object& obj)
{
    // �m�[�h�����s
    return (*exeItr_)->Execute(obj);
}
