// ��Ӱ� ������.   135page ~
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
	// ����ڰ� �����ڵ�		// �����Ϸ��� ������ �ڵ�
	Derived()				// Derived() : Base()	
	{ 
		std::cout << "Derived()" << std::endl; 
	}
	Derived(int a)			// Derived(int a) : Base()
	{ 
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived() 
	{ 
		std::cout << "~Derived()" << std::endl; 
		// ~Base()  //�����Ϸ��� �߰�
	}
};
int main()
{
	//	Derived d;	// call Derived::Derived()
	Derived d(5);   // call Derived::Derived(int)
}




