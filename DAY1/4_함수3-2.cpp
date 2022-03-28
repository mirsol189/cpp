#include <iostream>

// ��ũ�� �Լ� vs �ζ��� �Լ�
#define SQUARE(n) ((n)*(n))

inline int square(int n)
{
	return n * n;
}

int main()
{
	int n = 3;
		
	int ret1 = SQUARE(n); // ((n)*(n)) ���� �ҽ� �ڵ� ���� ġȯ
	int ret2 = square(n); // ���� �ڵ�� ġȯ
	
	// �ᱹ �� 2���� ���� �ڵ�� ���� �����մϴ�.
	// �׷���, ��ũ�� �Լ��� �������� �������ϴ�.
	// n = 3
	int ret3 = SQUARE(++n); // ((++n)*(++n))
	n = 3;
	int ret4 = square(++n);

	std::cout << ret3 << std::endl; // ?
	std::cout << ret4 << std::endl; //  ������ 16 �Դϴ�.
}
