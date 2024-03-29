﻿#include <iostream>

template<typename T1, typename T2>
//? Add(T1 a, T2 b)  // C++ 초창기에 ? 를 표기하는게 어려웠습니다.

//decltype(a + b) Add(T1 a, T2 b)  // 그래서, C++11에서 decltype()을 만들었습니다.
								 // 그런데 왜 이코드가 에러일까요 ?
								 // a, b 를 선언전에 사용하는 코드입니다.

//auto Add(T1 a, T2 b) -> decltype(a + b) // C++11의 후위 반환 표기법 사용하면 ok.

auto Add(T1 a, T2 b)  // C++14 부터는 후위 반환 타입 생략가능합니다.
{					  // 생략시 return 문장을 보고 추론합니다.
					  // 서로 다른 타입으로 계산되는 return 문장이 여러개 라면
					  // 위처럼 후위 반환 타입으로 표기해 주어야 합니다.
	return a + b;
}

int main()
{
	auto ret = Add(1, 3.4); // ok.. 

	std::cout << Add<int, double>(1, 2.2) << std::endl; // 타입을 전달하는 경우
	
	std::cout << Add(1, 2.2) << std::endl; // 타입인자를 생략하는 경우
											// 함수 인자로 타입 추론

//	a = 20; // error. 변수 a를 선언전에 사용하는 코드
//	int a = 0;
//	a = 10; // ok.. 변수를 선언후에 사용
}

