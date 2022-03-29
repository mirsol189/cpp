#include <iostream>

class Point
{
public:
	// 핵심 : 초기화 리스트에 있는 코드는, 코드순서가 아닌
	//		 멤버데이타가 놓인 순서대로 실행됩니다.
	//	     되도록 멤버 데이타 순서대로 초기화 하세요.
	int x, y;
//	int y, x;

	Point() : y(0), x(y)
	{
	}
};
int main()
{
	Point pt;

	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // ?
}




