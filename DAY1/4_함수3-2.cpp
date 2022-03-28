#include <iostream>

// 매크로 함수 vs 인라인 함수
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
