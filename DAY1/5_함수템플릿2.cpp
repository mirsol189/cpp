#include <iostream>

template<typename T1, typename T2>
? Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	std::cout << Add<int, double>(1, 2.2) << std::endl; // 타입을 전달하는 경우
	
	std::cout << Add(1, 2.2) << std::endl; // 타입인자를 생략하는 경우
											// 함수 인자로 타입 추론
}

