// 4_가상함수원리1-2
#include <iostream>

class Animal
{
	int age;
public:
	virtual void Cry() {} // 1
	virtual void Run() {}
};
//--------------------
class Dog : public Animal
{
	int color;
public:
	virtual void Cry() {} // 2
};

int main()
{
	Animal a;
	Dog    d;

	std::cout << sizeof(a) << std::endl;
	std::cout << sizeof(d) << std::endl;

	Animal* p = &d;

	p->Cry(); 
}


