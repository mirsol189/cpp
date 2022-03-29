#include <iostream>

// 선언과 구현의 분리
class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0);
};

// 생성자 구현을 클래스 외부에 만들때..
// 초기화 리스트도 외부 구현쪽에 넣어야 합니다.
Point::Point(int a /* = 0*/, int b /*= 0*/) 
	: x(a),
	  y(b) 
{
}


int main()
{

}




