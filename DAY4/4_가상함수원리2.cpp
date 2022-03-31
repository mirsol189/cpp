#include <iostream>

// 아래 코드는 좋은 코드 아닙니다. 절대 실전에서는 사용하지 마세요
// 학습을 위해서 만든 코드입니다.

class A
{
	int a;
public:
	void foo() { std::cout << "foo" << std::endl; } // 1
};
class B   // 주의 상속관계 아닙니다.
{
	int b;
public:
	virtual void goo() { std::cout << "goo" << std::endl; }  // 2
};
int main()
{
	A aaa;
//	B* p = &aaa; // error. static_cast 도 안됩니다.
	B* p = reinterpret_cast<B*>(&aaa); // ok..

	p->goo();	// 컴파일러가 하는일
				// 1. goo가 가상인지 아닌지 조사
				// 2. 가상이 아니면 : static binding, 포인터 타입으로 호출
				//    가상이면  : dynamic binding. 가상함수 테이블 참조해서 호출
				//				p->vtable[1]()   라는 기계어 코드 생성
			
}
// foo 비가상, goo 비가상 : goo 호출
// foo  가상,  goo  가상 : foo 호출
// foo  가상,  goo 비가상 : goo 호출
