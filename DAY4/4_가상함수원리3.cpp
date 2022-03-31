// 4_가상함수원리3
#include <iostream>

class Base
{
public:
	virtual void foo(int a = 10)	{
		std::cout << "Base foo : " << a << std::endl;
	}
};
class Derived : public Base  // 이번에는 상속관계 입니다
{
public:
	void foo(int a = 20) override 	{
		std::cout << "Derived foo : " << a << std::endl;
	}
};
int main()
{
	Derived d;
	Base* p = &d;
	p->foo(); // 화면 출력결과 예측해 보세요.
			  // "Derived foo : 10"
			  // 핵심 1. 디폴트 파라미터는 컴파일시간에 함수 호출문장에 값을 채워 주는것
			
			  // p->vtable[1]( 10 ) 라고 컴파일 됩니다.

	// 결론 
	// 디폴트 파라미터 : 컴파일 시간에 동작하는 문법
	// 가상함수       : 실행시간에 동작하는 문법

	// 컴파일 시간에 동작하는 문법과 실행시간에 동작하는 문법을 섞어 사용하지 마세요

	// 즉, 가상함수는 되도록 디폴트값 사용하지 마세요
	//     사용했다면 가상함수 재정의시 절대로 디폴트값을 변경하지 마세요
}