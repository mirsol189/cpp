#include <iostream>

// 다양한 타입에 대해서 동작하는 함수가 필요하면
// 틀(템플릿)을 만들면 된다.
template<typename T> 
T Add(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1,   2 ) << std::endl;
	std::cout << Add(1.1, 2.2) << std::endl;

	std::cout << Add(1, 2.2) << std::endl; // error
									// 컴파일러가 T 타입을 결정할수없다.

	std::cout << Add<double>(1, 2.2) << std::endl; // ok

}

