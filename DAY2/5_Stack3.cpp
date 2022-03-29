#include <iostream>

// Step 3. "Stack" 이라는 타입을 설계 하자.

struct Stack
{
	int buff[10];
	int idx;
};

void push(Stack* s, int value)
{
	s->buff[(s->idx)++] = value;
}
int pop(Stack* s)
{
	return s->buff[--(s->idx)];
}
int main()
{
	Stack s1, s2;
	s1.idx = 0;
	s2.idx = 0;
	push(&s1, 10);
	push(&s1, 20);
	std::cout << pop(&s1) << std::endl;
}
