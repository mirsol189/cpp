#include <iostream>

// Step 3. "Stack" 이라는 타입을 설계 하자.
// C 언어로 만들수 있는 최선의 코드(물론 다양한 테크닉도 가능하지만)

// 단점. 상태를 나타내는 데이타와 "push, pop" 이 분리되어 있다.
//     항상 push, pop 인자로 Stack* 가 필요하다.
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










