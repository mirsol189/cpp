#include <iostream>

// member field initialization
class Point
{
	// C++11 부터는 아래 처럼 직접 초기화도 가능 합니다.
	// member field initialization 이라고 합니다.
	int x = 0;     // 이렇게도 되고
	int y = { 0 }; // 이렇게도 됩니다.
public:
	Point() {}
	Point(int a) : y(a) {}
};
// 위 코드는 컴파일러에 의해 아래 처럼 변경됩니다.
class Point
{
	int x;// = 0;
	int y;// = { 0 };
public:
	// 위 코드를 보고 아래 처럼 생성자 변경
	// 사용자가 만든코드		// 컴파일러가 변경한 코드
	Point()  {}				// Point()      : x(0), y(0) {}	
	Point(int a) : y(a) {}	// Point(int a) : x(0), y(a) {}
}
int main()
{
	Point p1(3); // 1. y = 0 이 먼저 실행되고 y = 3 이 된다.
			     // 2. 그냥 y = 3만 실행된다.
}




