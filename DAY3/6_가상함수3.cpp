#include <iostream>

class Base
{
public:
	~Base() {}
};

class Derived : public Base
{
public:
	Derived() { std::cout << "�ڿ� �Ҵ�" << std::endl; }
	~Derived() { std::cout << "�ڿ� �ݳ�" << std::endl; }
};
int main()
{
	Derived d;
}