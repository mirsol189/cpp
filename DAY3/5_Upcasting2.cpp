// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	int age;
};
class Dog : public Animal
{
public:	int color;
};
class Cat : public Animal
{
public:	int speed;
};

int main()
{
	// Upcasting 활용/장점
	std::vector<Dog*> v1; // Dog 만 보관하겠다는 의도
	std::vector<Cat*> v2; // Cat 만 보관하겠다는 의도
	std::vector<Animal*> v3; // 모든 동물을 보관하겠다는 의도..
				// 동종(동일 기반 클래스 로 부터 파생된 타입)을 보관하는 컨테이너.

	// 아래 2개의 차이점을 많이 어려워 합니다.

	Dog dog;
	Animal* p = &dog; // 기존에 생성된 dog 를 가리키겠다는것
	Animal  a = dog;  // 에러는 아닌데...
					// 새로운 Animal 객체 생성

	// 그래서 아래 2줄의 차이점은 ?? 꼭 그림으로 기억해 두세요..
	std::vector<Animal>  v4;

	v4.push_back(dog); // dog 를 복사해서 새로 만든 Animal 보관

	std::vector<Animal*> v5;
	v5.push_back(&dog); // dog의 주소 보관

}

// 핵심 
// A 와 B를 묶어서 관리하고 싶다.
// => A, B의 공통의 기반 클래스를 만들어라!

// 상속은 
// 1. "기존타입을 확장해서 새로운 것을 만들기도 하지만"
// 2. 여러 타입을 묶기위해서도 사용합니다. <=== 이 관점도 아주 널리사용되므로
//							꼭 기억하세요..
