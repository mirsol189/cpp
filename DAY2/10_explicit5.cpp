#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v1(10);			// 10��¥�� ���� �迭
	std::vector<int> v2 = { 1,2,3,4 };	// 4��¥�� �����迭

	// �Ʒ� 2���� �������� ?
	std::vector<int> v3(10, 3);
	std::vector<int> v4{ 10, 3 };

	std::cout << v3.size() << std::endl; // ?
	std::cout << v4.size() << std::endl; // ?
}
