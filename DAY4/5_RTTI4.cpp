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
	// 방법 1. 조사후 캐스팅
	if (typeid(*p) == typeid(Dog))
	{
		Dog* pDog = static_cast<Dog*>(p);
		pDog->color = 10;
	}

	// 방법 2. 무조건 Dog 로 캐스팅 후 사용
	// static_cast : 컴파일 시간 캐스팅, 상속관계 타입은 항상 성공
	//			     그런데, p가 가리키는 곳에 정말 Dog가 있는지 조사는 못함
	//Dog* pDog = static_cast<Dog*>(p);

	// dynamic_cast : 실행시간 캐스팅. p가 가리키는 곳이 실제 Dog 인경우만 주소반환
	//					Dog가 아니면 nullptr 반환..
	Dog* pDog = dynamic_cast<Dog*>(p);

	std::cout << pDog << std::endl;
}


int main()
{
	Animal a;
	Dog d;

	foo(&a);
	foo(&d);
}



