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
    // 優先度順にsort
    node_.sort();

    // 優先度の一番高い子ノードをセット
    exeItr_ = node_.begin();
}



State PriorityNode::Execute(Object& obj)
{
    // ノードを実行
    return (*exeItr_)->Execute(obj);
}
