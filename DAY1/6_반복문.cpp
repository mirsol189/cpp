// 8_반복문 30 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };


//	for (int i = 0; i < 10; i++)
//		std::cout << x[i] << std::endl;

	// C++11 의 새로운 for 문 - "range for" 라고 부릅니다.
	// C#, java : foreach
	// python   : for in   
	for (auto e : x) // 배열뿐아니라 C++ 표준 list, vector등도 가능. 
	{
		std::cout << e << std::endl; 
	}

	// 1. 5개만 꺼낼수 없나요 ? 2칸씩 건너뛸수 없나요 ?
	//   => 원래 for 문사용하세요.
	// 2. 거꾸로(파이썬 reversed())안되나요 ? => 원래 for 문사용하세요.

	// => C++20 부터는 위 내용 다 지원하는 새로운 도구 등장합니다.
}
