#include <iostream>

// ��ü������ �ٽ� 1. ���α׷����� �ʿ��� Ÿ���� ���� ���� ����!!
// 2. Ÿ���� ���鶧 "���¸� ��Ÿ���� ����Ÿ�� ���¿� ���� ������ �����ϴ� �Լ�"
//    �� ��� Ÿ������ ���� ����.

// C���   : ����ü�� �Լ��� ������ ����.
// C++��� : ����ü�� �Լ��� ������ �ִ�.

struct Rect
{
	int left;			// ��� ����Ÿ �Ǵ� �ʵ� ��� �մϴ�
	int top;
	int right;
	int bottom;
	
	// ��� �Լ� (�޼ҵ�)��� �մϴ�.
	int getArea()
	{
		return (right - left) * (bottom - top);
	}
};

int main()
{
	Rect rc = { 0, 0, 10, 10 };

//	int n = getRectArea(rc);
	int n = rc.getArea();

	std::cout << n << std::endl;
}
