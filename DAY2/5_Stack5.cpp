#include <iostream>

// Step 5. 잘못 사용하기 어렵게, 제대로 사용하기 쉽게!!

struct Stack
{
private:				// 이 아래 있는 멤버는 멤버 함수에서만 접근 가능하다.
	int buff[10];
	int idx;

public:					// 이 아래 있는 멤버는 어디서도 접근 가능하다.
	void init()          { idx = 0; }
	void push(int value) { buff[idx++] = value; }
	int pop()            { return buff[--idx]; }
};

int main()
{
	Stack s1;
//	s1.idx = 0;
	s1.init();

	s1.push(10);
	s1.push(20);

//	s1.idx = -10; // Stack 사용자가 실수 했다.
				  // private 에 있다면 error

	std::cout << s1.pop() << std::endl;
}










