#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v1(10);			// 10��¥�� ���� �迭
	std::vector<int> v2 = { 1,2,3,4 };	// 4��¥�� �����迭
						// vector(std::initializer_list) �Դϴ�

	// �Ʒ� 2���� �������� ?
	std::vector<int> v3(10, 3);		// vector(int, int) ������
									// 10���� 3���� �ʱ�ȭ

	std::vector<int> v4{ 10, 3 };	// vector(intializer_list)
									// 2���� 10, 3���� �ʱ�ȭ

	std::cout << v3.size() << std::endl; // 10
	std::cout << v4.size() << std::endl; // 2
}
