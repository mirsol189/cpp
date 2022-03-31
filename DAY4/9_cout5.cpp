// 189(138)page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	Point p(1, 2);

	std::cout << p ; // cout.operator<<(Point) �� �־�� �Ѵ�.
					 // �׷���, Point �� ����ڰ� ���� Ÿ���̹Ƿ� �翬�� ����.
					 // => cout�� �̹� ������� ǥ�� Ŭ�����̹Ƿ� ����߰��ȵ�
					// ����� �ȵǸ� �Ϲ��Լ��� ����
					// operator<<(ostream, Point) 
					
	std::ostream&       os1 = cout;       // os�� cout�����Դϴ�.
	const std::ostream& os2 = cout;
					
	os1 << "A"; // ok    os1.operator<<("A")
	os2 << "A"; // error os1.operator<<("A") <== ��� ��� �Լ� �ƴ�.
}


