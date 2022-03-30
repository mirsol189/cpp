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

	

}
