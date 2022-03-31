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
	void goo() { std::cout << "goo" << std::endl; }  // 2
};
int main()
{
	A aaa;
//	B* p = &aaa; // error. static_cast 도 안됩니다.
	B* p = reinterpret_cast<B*>(&aaa); // ok..

	p->goo();  // foo ? goo ? 
			
}

