#include <iostream>

// Step 5. 잘못 사용하기 어렵게, 제대로 사용하기 쉽게!!

// 핵심 1. Stack 사용자는 내부 데이타(buff, idx) 를 알필요 없고,
//		  접근할 필요도 없다.(접근하면 안된다)
//     2. 사용자는 push(), pop() 함수만 알면 된다

// 멤버 데이타는 private 영역에 놓아서, 외부에 잘못된 사용으로 객체가 
// 불안해 지는 막는다.
// 잘 정의된 멤버 함수를 통해서만 Stack 의 상태를 변경할수 있다.

// encapsulation(캡슐화)
// information hiding(정보은닉)
// 접근지정자 : private, public



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










