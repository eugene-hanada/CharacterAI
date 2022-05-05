#pragma once

enum class State
{
	Success,		// ¬Œ÷
	Faild,			// ¸”s
	NowExe,			// Às’†
	End,			// I—¹
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

