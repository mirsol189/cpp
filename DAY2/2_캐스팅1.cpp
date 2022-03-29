// 10_캐스팅1.cpp    48 page
#include <iostream>
/*
int main()
{
	int n = 3;

	// int 주소를 double* 변수에 담기
//	double* p = &n; // C 언어 : 경고 정도만 발생. C++언어 error

	double* p = (double*)&n; // C 스타일의 캐스팅의 대부분 성공.

	// *p = 3.4; // 이때 현상을 생각해 보세요.
}
*/
int main()
{
	// C 캐스팅은 아주 위험한 캐스팅도 대부분 성공합니다. - 너무 위험
	const int c = 10;

//	int* p2 = &c; // C는 경고만, C++은 에러..
	int* p2 = (int*)&c; // ok.. C 스타일 캐스팅은 대부분 성공!!!

	*p2 = 20;

	std::cout << c   << std::endl; // 10 ? 20
	std::cout << *p2 << std::endl; // 10 ? 20
}

// C 스타일 캐스팅은 너무 위험합니다.
// 대부분 성공하는데,, 
// 과연 그 캐스팅이 개발자의 의도인지, 실수 였는지를 파악할수 있는 방법도 없습니다.
// 그래서 C++에서는 새로운 캐스팅 방법(4개)를 제공합니다.