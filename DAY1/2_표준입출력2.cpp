// 2_ǥ�������2.cpp - 15 page �Ʒ� �κ�~
#include <iostream>
#include <iomanip> // ����� ������(manipulator) �Լ�

// ������� ���¸� ����(����)�ϴ� ����
// i/o manipulator ��� �մϴ�.

int main()
{
	int n = 10;

	std::cout << n << std::endl; // 10

	std::cout << std::hex << n << std::endl; // a
	std::cout << std::dec << n << std::endl; // 10

	std::cout << std::setw(10) << n << std::endl;
	std::cout << std::setw(10) << std::setfill('#') << n << std::endl;
}