// 2_Stak1 - 60 page ~
#include <iostream>

// 스택을 만들어 봅시다.
// 버전 1. C언어

// 전역변수 사용
// 문제점 : Stack 이 2개 필요하면 어떻게 해야 할까 ??
int buff[10];
int idx = 0;

void push(int value)
{
	buff[ idx++ ] = value;
}
int pop()
{
	return buff[--idx];
}

int main()
{
	push(10);
	push(20);
	std::cout << pop() << std::endl; // 20
}
