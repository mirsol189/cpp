#include <iostream>

// ��ü������ �ٽ� 1. ���α׷����� �ʿ��� Ÿ���� ���� ���� ����!!

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
int getRectArea( const Rect& rc)
{
	return (rc.right - rc.left) * ( rc.bottom - rc.top);
}
int main()
{
	Rect rc = { 0, 0, 10, 10 };

	int n = getRectArea( rc );

	std::cout << n << std::endl;
}
