// 2_표준입출력1.cpp - 12 page
#include <cstdio>	// C 표준 입출력의 C++헤더
#include <iostream> // C++ 표준 입출력

int main()
{
	int n = 10;
	
	printf("%d\n", n);

	std::cout << n << std::endl;

	scanf("%d", &n);
	std::cin >> n;
}
