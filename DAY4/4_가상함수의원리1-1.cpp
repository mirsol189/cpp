#include <iostream>

// 컴파일러가 Animal 의 모든 가상함수의 주소를 담는 배열 생성

함수주소크기타입(void*등) animal_vtable[] = { RTTI정보, 
										  &Animal::Cry, 
										  &Animal::Run };
class Animal
{
	void* vtptr = animal_vtable; // 컴파일러가 추가한 멤버.
	int age;
public:
	virtual void Cry() {} 
	virtual void Run() {}
};
//--------------------
// Dog 가상함수 정보를 담은 배열(가상함수 테이블이라고 합니다.)
함수주소크기타입(void*등) dog_vtable[] = { RTTI정보,
									&Dog::Cry,
									&Animal::Run };
class Dog : public Animal
{
	vtable = dog_vtable; // 컴파일러가 추가한 코드
	int color;
public:
	virtual void Cry() {} 
};

int main()
{
	Animal a1;
	Animal a2;
	Dog    d;
	Animal* p = &d;

	p->Cry(); // 가상함수 이므로 2번 호출 
			  // p가 가리키는 곳을 조사후에 호출

			  // Cry 가상함수가 Animal 에서 몇번째 인지
			// 순서가 중요 합니다.
	// p->vtable[1]() 라는 기계어 코드 생성
}


