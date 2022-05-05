#include "SelectorNode.h"

SelectorNode::SelectorNode()
{
}

SelectorNode::~SelectorNode()
{
}

void SelectorNode::Reset()
{
	exeNode_ = list_.begin();
}

State SelectorNode::Execute(Object& obj)
{
	auto result = (*exeNode_)->Execute(obj);

	// 結果をチェック
	if (result == State::Faild)
	{
		// 失敗した時

		// 次のノードへ進める
		// 末端かチェック
		if (++exeNode_ == list_.end())
		{
			// 末端まで失敗したら失敗
			return State::Faild;
		}

		// まだ次のノードを実行するので実行中
		result = State::NowExe;
	}
	
	return result;

}
