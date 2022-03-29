// 6_초기화리스트1    85page ~
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) // "멤버 초기화 리스트" 라고 합니다.
	{								 // 좋은 방법, 대입이 아닌 초기화..
		x = a;  // 초기화가 아닌 대입 입니다.
		y = b;  // 좋지 않은 방법. 사용하지 마세요
	}
};
int main()
{
	Point pt(0, 0);

	// 초기화 vs 대입
	int n1 = 10; // 초기화. 만들면서 넣는것

	int n2;
	n2 = 10;     // 대입. 만든후에 넣는것
	
	// 위 처럼 primitive 타입인 경우는 거의 동일 합니다.
	// 그런데..
	// 사용자 정의 타입인 경우는 확실히 다릅니다.
	std::string s1("ABCD"); // 인자가 한개인 생성자 호출
							// 함수 호출 1회로 초기화 완료

	std::string s2;	// 1. 디폴트 생성자 호출
	s2 = "ABCD";	// 2. 대입 연산자 함수(s2.operator=()) 호출
					// => 함수 호출 2회로 문자열 넣기
}






