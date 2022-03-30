// 파일 분할
#include <iostream>

// Point.h
class Point
{
public:
	int x, y;
	Point(int a = 0, int b = 0);
	
	void set(int a, int b);
	
	// 핵심 : 상수 멤버 함수 만들때 "const" 는
	//       함수 선언과 구현 모두에 붙여야 합니다.
	void print() const;
};

Point::Point(int a, int b) : x(a), y(b) 
{
}

void Point::set(int a, int b) 
{
	x = a; 
	y = b; 
}

void Point::print() const
{
	std::cout << x << ", " << y << std::endl;
}
