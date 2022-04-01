// 8_스마트포인터4
#include <iostream>

// 스마트포인터 역사
// 1990년대에 "처음개념이 등장하고"
// 2000년초 "boost" 라는 라이브러리에서 "shared_ptr" 이라는 스마트포인터 제공    
// 2011년(C++11) 에서 "shared_ptr" 을 C++ 표준으로 채택

#include <memory> // C++ 표준의 스마트포인터(shared_ptr) 을 위한 헤더. 


class Car
{
	int speed;
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car() { std::cout << "~Car" << std::endl; }
};

int main()
{
//	std::shared_ptr<Car> sp1 = new Car; // error. explicit 생성자
	std::shared_ptr<Car> sp1(new Car); // ok 

	std::shared_ptr<Car> sp2 = sp1; // ok. 복사 생성자, 참조 계수 증가

	// 핵심 1. 스마트포인터의 크기
	std::cout << sizeof(sp1) << std::endl;

}