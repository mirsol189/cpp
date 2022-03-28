#include <iostream>

void foo(int n)    { std::cout << "int" << std::endl; }
void foo(double n) { std::cout << "double" << std::endl; }
void foo(bool n)   { std::cout << "bool" << std::endl; }
void foo(int* n)   { std::cout << "int*" << std::endl; }

int main()
{
	foo(0); // int      "0 은 정수형 리터럴"
	foo(0.0); // double "0.0 은 실수형 리터럴"
	foo(false ); // bool "false는 bool형 리터럴"
	foo(nullptr);  // int*  "nullptr 은 포인터형 리터럴"

	// nullptr의 정체는 0 아닌가요 ?
	// 아닙니다. 완전히 다릅니다.
	std::nullptr_t a = nullptr; // nullptr_t 타입입니다.

	// 이제 a는 nullptr 처럼 사용가능 합니다.
	int* p2 = a; // ok!
		
}
