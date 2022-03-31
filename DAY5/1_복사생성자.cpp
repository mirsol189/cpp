// github.com/codenuri/cpp  ���� "DAY5_�����ҽ�.zip" �����ø� �˴ϴ�.
// codexpert.org ���� �⼮�� �ּ���



// 1_���������  92 page
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	// ���� ������ : �ڽŰ� ������ Ÿ���� ��ü �Ѱ��� ���ڷ� ������ ������
	// ����ڰ� ������ ������ �����Ϸ��� �Ʒ� ����� ����
	Point(const Point& pt) : x(pt.x), y(pt.y)
	{
	}
};
int main()
{
	Point p1;		// 1�� ������ ���
	Point p2(1, 1);	// 2�� ������ ���	
//	Point p3(1);	// error. Point(int) ����� �����ڴ� ����.
	Point p4(p2);   // ok..   Point(Point) ����� �����ڰ� �ʿ�
					// ����ڰ� ������ �ʾ�����, �����Ϸ��� ����.
}
