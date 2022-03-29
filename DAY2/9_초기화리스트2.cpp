#include <iostream>

class Point
{
	int x, y;
public:
//	Point()				: x(0), y(0) { std::cout << "Point()" << std::endl; }
	Point(int a, int b) : x(a), y(b) { std::cout << "Point(int, int)" << std::endl; }
};
// Point p1;       // error. 디폴트 생성자가 없습니다
// Point p2(0, 0); // ok.. 인자 2개 생성자는 있습니다.


class Rect
{
	// 핵심 : 멤버 데이타로 디폴트 생성자가 없는 타입을 사용하게 된다면
	//       반드시 멤버 초기화 리스트에서 생성자를 호출하는 모양으로 만드세요
	Point ptFrom;
	Point ptTo;
public:

	Rect() : ptFrom(0, 0), ptTo(10, 10)
	{
	//	ptFrom(0, 0); // error. ptFrom 이라는 함수를 찾는 코드
		std::cout << "Rect()" << std::endl;
	}
};
int main()
{
	Rect r; 
}




