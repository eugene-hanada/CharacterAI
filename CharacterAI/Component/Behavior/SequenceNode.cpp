#include "SequenceNode.h"

SequenceNode::SequenceNode()
{
}

SequenceNode::~SequenceNode()
{
}

void SequenceNode::Reset()
{
	// 一番先頭のノードをセット
	exeNode_ = list_.begin();
}

State SequenceNode::Execute(Object& obj)
{
	// ノードを実行し結果を変数へ
	auto result = (*exeNode_)->Execute(obj);

	// 結果をチェック
	if (result == State::Success)
	{
		// 成功時

		// 末端まで行ったかチェック
		if (++exeNode_ != list_.end())
		{
			// 末端まで行ってないとき実行中
			return State::NowExe;
		}

		// 末端まですべて成功した時ここに来る
	}

	// 結果を返す
	return result;
}
