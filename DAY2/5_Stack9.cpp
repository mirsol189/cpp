#include <iostream>

// Step 9. 파일 분할

// 클래스를 만드는 2가지 방법
// 1. class 안에 멤버 함수의 구현부를 모두 만드는 방법
// 2. class 안에는 멤버 함수의 선언만 넣고, .h 파일로 만들고
//    멤버 함수의 구현은 class 외부에서 작성하고, .cpp 파일로.


#include "Stack.h"

int main()
{
	Stack s1(20);	


	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;
}







