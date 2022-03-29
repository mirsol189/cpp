#include <iostream>

// 사각형의 면적을 구하는 함수. 
int getRectArea(int left, int top, int right, int bottom)
{
	return (right - left) * (bottom - top);
}

int main()
{
	int n = getRectArea(0, 0, 10, 10);
	std::cout << n << std::endl;
}
