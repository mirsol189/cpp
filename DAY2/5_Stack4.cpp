#include <iostream>

// Step 4. Stack 의 상태를 나타내는 데이타와 상태를 가지고 연산을 수행하는
//		   함수를 묶어서 타입을 만든다.
//         => C++ 구조체는 함수를 포함할수 있다.

struct Stack
{
	int buff[10];
	int idx;

	void push(int value) {	buff[idx++] = value;}
	int pop()            {	return buff[--idx];	}
};

int main()
{
	Stack s1, s2;
	s1.idx = 0;
	s2.idx = 0;
	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;

//	push(&s1, 10);
//	push(&s1, 20);
//	std::cout << pop(&s1) << std::endl;
}










