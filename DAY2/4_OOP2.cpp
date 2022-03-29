#include <iostream>

// 객체지향의 핵심 1. 프로그램에서 필요한 타입을 먼저 설계 하자!!

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
int getRectArea( const Rect& rc)
{
	return (rc.right - rc.left) * ( rc.bottom - rc.top);
}
int main()
{
	Rect rc = { 0, 0, 10, 10 };

	int n = getRectArea( rc );

	std::cout << n << std::endl;
}
