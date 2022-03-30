// 상속과 생성자.   135page ~
#include <iostream>

class Base
{
	int x;
public:
	Base() { std::cout << "Base()" << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
	int y;
public:
	// 사용자가 만든코드		// 컴파일러가 변경한 코드
	Derived()				// 
	{ 
		std::cout << "Derived()" << std::endl; 
	}
	Derived(int a) 
	{ 
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived() 
	{ 
		std::cout << "~Derived()" << std::endl; 
	}
};

int main()
{
	//	Derived d;	
	Derived d(5);
}




