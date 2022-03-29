#include <iostream>

// Step 2. push 함수가 전역변수를 사용하지 말고
//		  buff 와 idx 를 인자로 전달 받자.

// 장점 : 한개의 push, pop 함수로 2개이상의 스택을 사용할수 있다.
// 단점 : 코드가 너무 복잡하다.

void push(int* buff, int* idx, int value)
{
	buff[(*idx)++] = value;
}
int pop(int* buff, int* idx )
{
	return buff[--(*idx)];
}
int main()
{
	int buff1[10];
	int idx1 = 0;

	push(buff1, &idx1, 10);
	push(buff1, &idx1, 20);
	std::cout << pop(buff1, &idx1) << std::endl;
}
