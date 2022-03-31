// github.com/codenuri/cpp  에서 "DAY5_사전소스.zip" 받으시면 됩니다.
// codexpert.org 에서 출석해 주세요



// 1_복사생성자  92 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	// 복사 생성자 : 자신과 동일한 타입의 객체 한개를 인자로 가지는 생성자
	// 사용자가 만들지 않으면 컴파일러가 아래 모양을 제공
	Point(const Point& pt) : x(pt.x), y(pt.y)
	{
	}
};
int main()
{
	Point p1;		// 1번 생성자 사용
	Point p2(1, 1);	// 2번 생성자 사용	
//	Point p3(1);	// error. Point(int) 모양의 생성자는 없다.
	Point p4(p2);   // ok..   Point(Point) 모양의 생성자가 필요
					// 사용자가 만들지 않았지만, 컴파일러가 제공.
}
