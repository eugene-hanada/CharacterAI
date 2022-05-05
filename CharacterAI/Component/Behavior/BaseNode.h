#pragma once

enum class State
{
	Success,		// ����
	Faild,			// ���s
	NowExe,			// ���s��
	End,			// �I��
};

class Object;

class BaseNode
{
public:
	BaseNode();
	virtual ~BaseNode();
	virtual void Reset();
	virtual State Execute(Object& obj) = 0;
private:
};

