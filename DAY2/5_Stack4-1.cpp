#include <iostream>

// ��� �Լ��� ȣ�� ����..
// Stack s1, s2 �� �����
// 1. ��� ����Ÿ�� s1, s2 ���� ����ϰ�
// 2. ��� �Լ��� ���� �˴ϴ�.
// 3. ������ �Ʒ� �ּ����� ���� �ϼ���..
struct Stack
{
	int buff[10];
	int idx;

	void push(int value)  //  void push(Stack* this, int value)
	{ 
		buff[idx++] = value; // this->buff[(this->idx)++] = value; �� ����
	}
	int pop()			// void pop(Stack* this)      
	{
		return buff[--idx]; 
	}
};

int main()
{
	Stack s1, s2;
	s1.idx = 0;
	s2.idx = 0;

	s1.push(10); // push(&s1, 10) ���� ������ �˴ϴ�.

	//	push(&s1, 10);

}










