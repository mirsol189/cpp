// 4_상수멤버함수1.cpp    119 page ~
#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	// 상수 멤버 함수 : 멤버 함수안에서 멤버데이타를 수정하지 않을것이라고
	//				  컴파일러에게 알려 주는 것
	//				  1. 상수 멤버함수안에서 멤버 변수를 수정하면 에러
	//				  2. 상수 객체라도 상수 멤버함수는 호출가능
	void print() const
	{	
//		x = 100; // error. 상수 멤버함수에서는 멤버데이타 수정 안됨.

		std::cout << x << ", " << y << std::endl;
	}
};
int main() 
{
	const Point p(1, 2);

//	p.x = 10;		// error. public 에 있지만, 상수 이므로
//	p.set(10, 20);	// error. 
	p.print();		// error
					// 단, print()가 상수 멤버 함수라면 ok. 
}

