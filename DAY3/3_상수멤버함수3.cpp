#include <iostream>

class Test
{
public:
	// 동일 이름의 상수 멤버 함수와 비상수 멤버함수를 동시에 만들수 있습니다
	// => "overloading" 입니다.
//	void foo()       { std::cout << "foo" << std::endl; }
	void foo() const { std::cout << "foo const" << std::endl; }
};

int main()
{
	const Test ct;	// ct 는 상수 객체이므로 
	ct.foo();		// 상수 멤버 함수만 호출가능합니다.  "foo const"

	Test t;		// t는 상수 객체가 아닙니다.
	t.foo();	// 1. 비상수 멤버함수가 우선권이 있습니다.   "foo"
				// 2. 1번이 없으면 "foo const" 호출
	// 의도는 동일이름의 함수를 상수 객체일때와 비상수 객체일때 다르게 동작하도록
	// 하려고..
	
	std::vector<int>       v1 = { 1,2,3 };
	const std::vector<int> v2 = { 1,2,3 };

	// 아래 4개는 모든 "객체.operator[](0)" 함수를 호출합니다
//	int n1 = v1[0]; // ok
//	int n2 = v2[0]; // ok
//	v1[0] = 10; // ok
//	v2[0] = 10; // error

}

