// 4_�����Լ�����3
#include <iostream>

class Base
{
public:
	virtual void foo(int a = 10)
	{
		std::cout << "Base foo : " << a << std::endl;
	}
};
class Derived : public Base  // �̹����� ��Ӱ��� �Դϴ�
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
	p->foo(); // ȭ�� ��°�� ������ ������.
}