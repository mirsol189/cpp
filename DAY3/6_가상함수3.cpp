#include <iostream>

class Base
{
public:
	~Base() {}
};

class Derived : public Base
{
public:
	Derived() { std::cout << "자원 할당" << std::endl; }
	~Derived() { std::cout << "자원 반납" << std::endl; }
};
int main()
{
	Derived d;
}