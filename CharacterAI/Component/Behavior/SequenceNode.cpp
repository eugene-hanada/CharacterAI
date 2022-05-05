#include "SequenceNode.h"

SequenceNode::SequenceNode()
{
}

SequenceNode::~SequenceNode()
{
}

void SequenceNode::Reset()
{
	// ��Ԑ擪�̃m�[�h���Z�b�g
	exeNode_ = list_.begin();
}

State SequenceNode::Execute(Object& obj)
{
	// �m�[�h�����s�����ʂ�ϐ���
	auto result = (*exeNode_)->Execute(obj);

	// ���ʂ��`�F�b�N
	if (result == State::Success)
	{
		// ������

		// ���[�܂ōs�������`�F�b�N
		if (++exeNode_ != list_.end())
		{
			// ���[�܂ōs���ĂȂ��Ƃ����s��
			return State::NowExe;
		}

		// ���[�܂ł��ׂĐ��������������ɗ���
	}

	// ���ʂ�Ԃ�
	return result;
}
