// github.com/codenuri/cpp  에서 "DAY5_사전소스.zip" 받으시면 됩니다.
// codexpert.org 에서 출석해 주세요



// 1_복사생성자  92 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	Point(const Point& pt) : x(pt.x), y(pt.y)
	{
		std::cout << "복사생성자" << std::endl;
	}
};

void f1(Point pt) {} // Point pt = p1
//void f1(Point& pt) {} // Point& pt = p1

Point f2()
{
	Point pt;
	return pt;
}
int main()
{
	// 복사 생성자가 호출되는 3가지 경우

	// 1. 객체 생성시 자신과 동일 타입의 객체로 초기화 될때
	Point p1(1, 2);
	Point p2 = p1; // Point p2(p1)  <<== 이순간 복사 생성자 호출

	// 2. 함수 호출시 인자를 call by value로 받을때
	f1(p1);

	// 3. 함수가 객체를 "값 타입"으로 반환 할때
	//    임시객체로 반환되는데, 임시객체를 만들때 복사 생성자 호출
	f2();
}
