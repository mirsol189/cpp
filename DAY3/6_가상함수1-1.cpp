// 7_가상함수1  144 page ~
#include <iostream>

class Animal
{
public:
	        void Cry1() { std::cout << "Animal Cry1" << std::endl; }
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; }
};

class Dog : public Animal
{
public:
		    void Cry1() { std::cout << "Dog Cry1" << std::endl; }  
	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }
};

int main()
{
	Dog    d; 

	Animal* p = &d;

	p->Cry1();	
	p->Cry2();
}

