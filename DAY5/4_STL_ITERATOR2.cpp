#include <iostream>
#include <list>
#include <vector>

int main()
{
//	std::list<int> s = { 1,2,3,4,5 };
	std::vector<int> s = { 1,2,3,4,5 };

	// 1. 정확한 타입
//	std::list<int>::iterator p1 = s.begin();
	auto p1 = s.begin();

	// 정확한 타입을 사용하지 마세요
	// (1) 복잡해 보인다.
	// (2) 컨테이너 변경시 코드 수정 필요

	// 2. past the end
	auto p2 = s.begin(); // 처음 요소
	auto p3 = s.end();   // 마지막 요소가 아닌 마지막 다음 요소

	*p2 = 10; // ok
	*p3 = 10; // runtime error. 절대 .end()로 얻은 반복자는
				// * 하면 안됩니다.

	// ==, != 로 비교만 해야 합니다.
	while (p2 != s.end())
	{
		std::cout << *p2 << std::endl;
		++p2;
	}
}







/*
namespace std
{
	template<typename T>
	class list
	{
	public:
		class iterator
		{
		};
	};
}
*/