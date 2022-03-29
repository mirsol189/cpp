// 5_Stack5-1
#include <iostream>

// 접근 지정자를 표기 하는 않은 경우
// struct : public 이 디폴트 입니다
// class  : private 이 디폴트 입니다

// C++ struct 와 class 의 차이는 무엇인가요 ?
// => 단, "한가지의 차이점" 만 있습니다.
// => 접근 지정자 생략시 "디폴트" 가 무엇인가 입니다.

// 단, 다른 언어(C#, java, swift 등)에서는 
// struct vs class 는 아주 차이가 많습니다.(value type , reference type개념)

// 객체지향 철학 : 안전해야 합니다.(사용자가 잘못 사용할수 없게 해야 합니다.)
//               그래서, struct 보다는 class 가 좋습니다.(C++에서)
//				단, 모든 멤버를 의도적으로 public 으로 놓을때는
//				struct 로 하세요..

//struct Stack
class Stack
{
//private:				
	int buff[10];
	int idx;

public:					
	void init() { idx = 0; }
	void push(int value) { buff[idx++] = value; }
	int pop() { return buff[--idx]; }
};

int main()
{
	Stack s1;
	s1.init();

	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;
}










