// 5_예외1 - 231
#include <iostream>

// 모든 함수는 실패 할수 있습니다.
int connectServer()
{
	// 방법 1. 함수가 실패시 프로그램을 종료 하자.
	if (실패)
		exit(-1);
	
	// 방법 2. 호출자에게 실패 했다고 보고 한다.
	// C언어 : 함수 반환값을 사용한다.
	// 단점 : 1. 함수 반환값과 실패가 섞여 있다.
	//       2. 호출자가 무시할수 있다.
	if (실패)
		return -1;
}


int main()
{
	connectServer();

	std::cout << "프로그램 계속 실행" << std::endl;
}