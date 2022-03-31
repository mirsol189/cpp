// 4_가상함수원리3
#include <iostream>

class Base
{
public:
	virtual void foo(int a = 10)
	{
		std::cout << "Base foo : " << a << std::endl;
	}
};
class Derived : public Base  // 이번에는 상속관계 입니다
{
public:
	void foo(int a = 20) override 
	{
		std::cout << "Derived foo : " << a << std::endl;
	}
};
int main()
{
	Derived d;
	Base* p = &d;
	p->foo(); // 화면 출력결과 예측해 보세요.
}