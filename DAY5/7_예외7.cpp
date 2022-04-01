#include <iostream>

void foo()
{
}

int main()
{
	// noexcept : 함수가 예외 가능성이 있는지 조사
	//			  실제로 함수를 호출하는 것은 아님
	bool b = noexcept( foo() );

	if (b)
		std::cout << "foo 예외 가능성 없음. 항상 안전" << std::endl;
	else
		std::cout << "foo 예외 가능성 있음" << std::endl;

}