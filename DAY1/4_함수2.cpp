#include <cstdio>
// 4_함수2 - 35 page

// 함수 오버로딩(overloading) : 인자의 갯수나 타입이 다르면
//						동일한 이름의 함수를 여러개 만들수 있다.
//						일관성 있는 사용하기 쉬운 라이브러리 구축

// 대부분의 언어가 지원
// 지원 하지 않는 언어 : C언어, Python 
int square(int a)
{
	return a * a;
}

double square(double a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4);
}

// 주의 사항 : 호출시 컴파일러가 반드시 구별할수 있어야 합니다.
void f1(int) {}
void f1(int, int b = 10) {}
f1(20); // error

void f2(int) {}
char f2(int) { return 0; }

f2(10); // error. 반환 타입만 다른경우, 오버로딩할수 없다.