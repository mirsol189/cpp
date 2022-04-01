// 6_STL_CONTAINER1 - 214p ~ 
#include <iostream>
#include <vector>
#include <list>

int main()
{
	// C �迭 vs STL vector
	int x[5] = { 1,2,3,4,5 }; //  stack �� 5�� ��Ұ� ���������� ..

	std::vector<int> v = { 1,2,3,4,5 }; // ���� 5�� ��Ұ� ����������...

	// ������ : ���ӵ� �޸�, [] �� ��� ����

	x[0] = 5;
	v[0] = 5;

	// ������
	// �迭 : ũ�� ������ �Ұ����ϴ�.
	// vector : ũ�� ������ �����ϰ�, �پ��� ��� �Լ� ����

	v.resize(10);

	std::cout << v.size() << std::endl;
}