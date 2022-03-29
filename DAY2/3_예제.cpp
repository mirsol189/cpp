#include <iostream>
#include <algorithm> // 이안에 swap 있습니다.

// Swap를 만들어 봅시다.
// 1. C 버전
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// C++ 버전
namespace Util
{
	template<typename T>
	inline void Swap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
}

int main()
{
	int x = 3, y = 2;
//	Swap(&x, &y);
//	Util::Swap(x, y);
	std::swap(x, y); // 이미 C++ 표준에 있습니다.
					 // <algorithm> 헤더.

	std::cout << x << std::endl;
	std::cout << y << std::endl;
}



