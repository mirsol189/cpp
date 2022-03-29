#include <iostream>

// Step 6. 초기화를 자동으로!!
//          => init() 이름의 함수를 생성자로 변경
//			=> 생성자 : 구조체(클래스) 이름과 동일한 이름의 함수
//				      Stack 타입 변수 생성시 자동으로 호출된다.
// 결국
// Stack 사용자 : Stack 을 사용하기가 점점 쉬워 진다!!

// Stack 개발자 : 사용자가 쉽고, 안전하게 사용하도록 하기 위해
//			    점점 알아야 할것이 많아 진다.

//struct Stack
class Stack
{
private:				
	int buff[10];
	int idx;

public:		
	// 생성자 : 구조체(또는 클래스)이름과 동일한 이름의 멤버 함수
	//        Stack 타입 변수를 만들면 자동으로 호출된다.
	//	      반환 타입을 가질수 없고, 인자는 있어도 되고 없어도 된다.
	Stack() { idx = 0; }

	void push(int value) { buff[idx++] = value; }
	int pop() { return buff[--idx]; }
};

int main()
{
	Stack s1;

//	s1.init();

	s1.push(10);
	s1.push(20);


	std::cout << s1.pop() << std::endl;
}



// 용어 정리
int n; // 단순하게 메모리만 할당 합니다. "변수" 라고 합니다.

Stack s; // 필요한 메모리를 할당하고
		 // 생성자호출을 통해서 자동으로 초기화 됩니다.
		 // 단순히, "변하는 숫자" 라고 하기에는 부족한점이 있습니다.
		 // "변수" 라는 용어대신 "객체(object)" 라고 부릅니다.

// primitive 타입의 인스턴스 : 변수
// user define 타입의 인스턴스 : 객체






