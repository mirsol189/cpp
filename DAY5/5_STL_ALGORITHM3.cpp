#include <iostream>
#include <vector>
#include <list>
#include <algorithm> 

// 조건자(predicator) : 반환타입이 bool 인 함수
bool fn(int n) { return n % 3 == 0; }

int main()
{
	std::list<int>   s = { 1, 6, 2,3,4,5 };

//	auto ret2 = std::find_if(s.begin(), s.end(), fn );

	// C++11 람다표현식
	// 익명의 함수를 만드는 문법
	// [] : lambda introducer. 람다표현식이 시작됨을 알리는 기호
	auto ret2 = std::find_if(s.begin(), s.end(),
								[](int n) { return n % 3 == 0; });



	std::cout << *ret2 << std::endl; 
}