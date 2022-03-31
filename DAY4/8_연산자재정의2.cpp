//  5_������������ - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }


	Point operator+(const Point& pt)
	{
		std::cout << "����� ���� operator+" << std::endl;

		Point temp(x + pt.x, y + pt.y);
		return temp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // 1) p1.operator+(p2) �� �����ϸ� ���
						// 2) operator+(p1, p2) �� �����ϸ� ���
						// 1, 2 �� ��� �����ϸ� ������ ����.

}

