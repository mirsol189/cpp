#pragma once

// Stack.h �� �Ʒ� �κ� ��������..
class Stack
{
private:
	int* buff;
	int  idx;

public:
	Stack(int size = 10);
	~Stack();
	void push(int value);
	int pop();
};
