// 2_this2-1
struct Point   // class �� �ص� �˴ϴ�.
{
	int x;
	int y;
};

// �ٽ� 1. f1, f2 �� �������� ��Ȯ�� �˾� �μ���
void f1(Point  p1) {}
void f2(Point& p2) {}

int main()
{
	Point pt;
	f1(pt);
	f2(pt);
}