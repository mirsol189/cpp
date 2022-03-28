// 2_표준입출력2.cpp - 15 page 아래 부분~
#include <iostream>
#include <iomanip> // 입출력 조정자(manipulator) 함수

// 입출력을 형태를 변경(조절)하는 것을
// i/o manipulator 라고 합니다.

int main()
{
	int n = 10;

	std::cout << n << std::endl; // 10

	std::cout << std::hex << n << std::endl; // a
	std::cout << std::dec << n << std::endl; // 10

	std::cout << std::setw(10) << n << std::endl;
	std::cout << std::setw(10) << std::setfill('#') << n << std::endl;
}