﻿#include <iostream>

template<typename T1, typename T2>
//? Add(T1 a, T2 b)  // C++ 초창기에 ? 를 표기하는게 어려웠습니다.

decltype(a + b) Add(T1 a, T2 b)  // 그래서, C++11에서 decltype()을 만들었습니다.
								 // 그런데 왜 이코드가 에러일까요 ?
{
	return a + b;
}

int main()
{
	std::cout << Add<int, double>(1, 2.2) << std::endl; // 타입을 전달하는 경우
	
	std::cout << Add(1, 2.2) << std::endl; // 타입인자를 생략하는 경우
											// 함수 인자로 타입 추론
}

