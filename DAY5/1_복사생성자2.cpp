// github.com/codenuri/cpp  ���� "DAY5_�����ҽ�.zip" �����ø� �˴ϴ�.
// codexpert.org ���� �⼮�� �ּ���



// 1_���������  92 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	Point(const Point& pt) : x(pt.x), y(pt.y)
	{
		std::cout << "���������" << std::endl;
	}
};

void f1(Point pt) {} // Point pt = p1
//void f1(Point& pt) {} // Point& pt = p1

Point f2()
{
	Point pt;
	return pt;
}
int main()
{
	// ���� �����ڰ� ȣ��Ǵ� 3���� ���

	// 1. ��ü ������ �ڽŰ� ���� Ÿ���� ��ü�� �ʱ�ȭ �ɶ�
	Point p1(1, 2);
	Point p2 = p1; // Point p2(p1)  <<== �̼��� ���� ������ ȣ��

	// 2. �Լ� ȣ��� ���ڸ� call by value�� ������
	f1(p1);

	// 3. �Լ��� ��ü�� "�� Ÿ��"���� ��ȯ �Ҷ�
	//    �ӽð�ü�� ��ȯ�Ǵµ�, �ӽð�ü�� ���鶧 ���� ������ ȣ��
	f2();
}
