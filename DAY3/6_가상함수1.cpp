// 7_가상함수1  144 page ~
#include <iostream>

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// 함수 오버라이드(override) : 기반 클래스 멤버함수를 파생클래스가 다시 만드는 것
	// overloading 과 헷갈리지 마세요.
	void Cry1() { std::cout << "Dog Cry" << std::endl; }  // 2
};

int main()
{
	Animal a; a.Cry1(); // 1번 호출
	Dog    d; d.Cry1(); // 2번 호출

	Animal* p = &d;		

//	if (사용자입력 == 1) p = &a; // 입력에 따라 p가 가리키는 객체가 변경됨

	// 컴파일러는 아래 코드에서 p가 어느 객체를 가리키는지 알수 있을까요 ?

	p->Cry1();	// 논리적으로는 2번을 호출하는게 맞습니다.
				// 그런데,
				// C++, C# : 1번 호출
				// java, swift, python, Objective-C : 2번
}

// p->Cry1() 을 했을때.. 어떤 함수 와 연결할것인가 ? "함수 바인딩(binding)" 이라고합니다.

// 1. static binding : 컴파일러가 컴파일시간에 어떤 함수를 호출할지를 결정
//					   컴파일 시간에는 p가 가리키는 곳에 어떤 객체가 있는지 알수 없다
//						p의 포인터 타입만 알수 있다.
//						포인터 타입(Animal*) 에 따라 함수 결정
//						Animal Cry1
// 빠르다. 논리적이지 않다.
// C++, C# 의 기본 정책

// 2. dynamic binding : 컴파일 시간에 p가 가리키는 곳을 조사하는 기계어 코드생성
//					    실행할때 조사하는 기계어 코드를 실행해 보고
//						객체에  따라 함수 호출
//						객체가 Dog 라면 Dog Cry1() 호출
// 느리다. 논리적이다
// java, Objective-C, swfit, kotlin, 
// C++, C# 의 가상함수(virtual )

