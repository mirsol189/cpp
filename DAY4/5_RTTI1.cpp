#include <iostream>

int main()
{
	int n = 10;

	// 특정 변수의 타입을 알고 싶으면 "typeid" 라는 연산자를
	// 사용하면 됩니다.
	const std::type_info& t = typeid(n);

	std::cout << t.name() << std::endl;

}