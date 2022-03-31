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

	friend Point operator+(const Point& p1, const Point& p2);
};
// ����� �ƴ� operator+ �Լ�
Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "����� �ƴ� operator+" << std::endl;

	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // 1) p1.operator+(p2) �� �����ϸ� ���
						// 2) operator+(p1, p2) �� �����ϸ� ���
						// 1, 2 �� ��� �����ϸ� ������ ����.

	p3.print();

	// ������ �����ǽ�
	// ��� �Լ��� ����� �ƴ� �Լ��� ������� �������� ?

	// 1. "����� ����." ������ �ٰ� : private ����Ÿ ������ ����� ���ϴ�

	// 2. "�Ϲ��Լ��� ����." ������ �ٰ� : ��� �Լ��� ����� �������� �ִ�.

	// �Ʒ� �ڵ带 "����Լ�"�� ����� ���� ������ ������
	int n = 3;

	Point p4 = p1 + p2; // p1.operator+(Point) �� ������ ok
	Point p5 = p1 + n;  // p1.operator+(int)   �� ������ ok
	Point p6 = n  + p1; // n.operator+(Point)  �� ������ �Ǵµ�.. 
					    // �׷���, n�� user type �� �ƴϹǷ� ����Լ�������.
						// �׷���, ����� �ƴ� �Լ��δ� ����� �ִ�.
						// operator+(int, Point) �� �ϸ� �ȴ�.

	// ���̽��� ö���� ����ֽ��ϴ�.
//	p6 = p1 + n   // p1.__add__(Int)

//	p7 = n + p1   // 1. n.__add__(Point) �� �����ϸ� ���
				  // 2. p1.__radd__(Int) �� ���
}

// C#, java : ��� �Լ� ���丸 ����..
// swift, python : ��� �Լ�, �Ϲ� �Լ� ��� ����

// python : private ������ �����Ƿ� ��� �Ϲ� �Լ����� ��� ���� ����
// swift  : �Ϲ��Լ����� private ��� ���� �ȵ�.
