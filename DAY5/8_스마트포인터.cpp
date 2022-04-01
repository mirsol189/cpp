// 7_스마트포인터 - 201(150)
#include <iostream>

class Car
{
	int speed;
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car()    { std::cout << "~Car"   << std::endl; }
};

// 스마트 포인터(smart pointer) 개념
// 개념 : 임의 타입의 "객체" 가 "다른 타입의 포인터" 역활을 하는 것
// 원리 : ->, * 연산자를 재정의해서 포인터 처럼 보이게 하는 것
// 장점 : raw pointer 가 아니라 객체 라는 점.
//       생성/복사/대입/소멸의 모든 과정에서 추가 작업을 수행할수 있다.
//       대표적인 예, 소멸자에서 "delete" 기능을 넣으면 자동 삭제 기능을 가지는
//      스마트포인터를 만들수 있다.

class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}
	
	~Ptr() { delete obj; }

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }
};
int main()
{
	// Car* p = new Car;

	// 아래 2줄을 잘 생각해보세요
	// "p" 는 "Ptr" 타입의 "객체" 입니다.
	// 그런데, "Car" 타입의 "포인터" 처럼 사용됩니다.

	Ptr p = new Car; // Ptr p( new Car )

	p->Go(); // (p.operator->())Go() 인데
			 // (p.operator->())->Go() 의 모양으로 해석됩니다.

	// p가 진짜로 포인터 처럼 보이게 하려면 아래코드도 되어야 합니다.
	(*p).Go(); // (p.operator*()).Go()

	//delete p;
} // <== p가 raw pointer 라면 포인터 변수만 파괴
  //     p가 객체(Ptr) 라면 Ptr 소멸자 호출
  //     소멸자에서 자신이 사용하던 자원을 스스로 delete 하면
  //     사용자가 delete 할필요 없다.



