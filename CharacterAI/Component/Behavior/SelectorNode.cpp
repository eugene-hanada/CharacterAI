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

	// ���ʂ��`�F�b�N
	if (result == State::Faild)
	{
		// ���s������

		// ���̃m�[�h�֐i�߂�
		// ���[���`�F�b�N
		if (++exeNode_ == list_.end())
		{
			// ���[�܂Ŏ��s�����玸�s
			return State::Faild;
		}

		// �܂����̃m�[�h�����s����̂Ŏ��s��
		result = State::NowExe;
	}
	
	return result;

}
