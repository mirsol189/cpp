// 5_생성자1
#include <iostream>

class Point
{
	int x, y;
public:
	// 생성자 
	// 1. 여러개 만들수 있다.
	// 2. 모든 객체는 생성될때 반드시 생성자를 호출해야 한다.
	// 3. 사용자가 생성자를 한개도 만들지 않으면
	//    컴파일러가 "디폴트 생성자"를 제공한다.
	//    디폴트 생성자 :  인자가 없는 생성자.
	Point()             { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

int main()
{
	Point pt1;		 // 1번 호출
	Point pt2(1, 2); // 2번 호출
	Point pt3{ 1,2 };// 2번 호출, C++11 부터 일관된 초기화 문법
	Point pt4 = { 1,2 }; // ok

	//------------------------------
	Point arr1[5]; // 1번 생성자 5회 호출
	Point arr2[5] = { Point(1,2), {2,2} }; // 2번 생성자2회, 1번생성자 3회

	Point* p; // 객체 생성이 아님. 생성자 호출 안됨.

	p = (Point*)malloc( sizeof(Point) ); // 8 byte 메모리 할당
										 // 생성자 호출 안됨.
	free(p); // 역시, 소멸자 호출 안됨

	p = new Point; // 생성자 호출(1번 )
	delete p;      // 소멸자 호출

	p = new Point(1, 2); // 2번 생성자
	delete p;
}

