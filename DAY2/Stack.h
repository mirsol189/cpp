#pragma once

// Stack.h 에 아래 부분 넣으세요..
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
