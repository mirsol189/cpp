#include <iostream>


class Animal
{
	int age;
public:
	virtual ~Animal() {}
};

class Dog : public Animal
{
public:
	int color;
};

void foo(Animal* p) 
{
	const std::type_info& t1 = typeid(*p);
	const std::type_info& t2 = typeid(Dog);

//	if (t1 == t2)
	if (typeid(*p) == typeid(Dog)) 
	{
		std::cout << "p �� Dog�� ����Ŵ" << std::endl;
		
		// Dog �� ����Ű�� ���� Ȯ���ϹǷ� Dog�� ĳ�����ؼ� ���
		Dog* pDog = static_cast<Dog*>(p);
		pDog->color = 10;
		
	}
}

int main()
{
	Animal a;
	Dog d;

//	foo(&a);
	foo(&d);
}



