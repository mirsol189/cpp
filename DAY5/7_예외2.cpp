// 5_예외1 - 231
#include <iostream>

// 객체지향 언어들 : 실패시 "예외"라는 것을 던진다.

// 1. 반환값과 오류의 전달이 분리된다.
// 2. 호출자는 반드시 오류를 처리해야 한다.
//   => 처리하지 않으면 "abort()" 가 수행되고 종료 된다.
int connectServer()
{
	if (1)		 // 실패라고 가정
		throw 1; // 예외를 던진다.

	return 0;
}


int main()
{
	connectServer();

	std::cout << "프로그램 계속 실행" << std::endl;
}