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
		
	int ret1 = SQUARE(n);
	int ret2 = square(n);
}
