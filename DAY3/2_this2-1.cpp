// 2_this2-1
struct Point   // class �� �ص� �˴ϴ�.
{
	int x;
	int y;
	~Point() { std::cout << "~Point()" << std::endl; }
};

// �ٽ� 1. f1, f2 �� �������� ��Ȯ�� �˾� �μ���
/*
void f1(Point  p1) {} // call by value     : ���纻 ��ü ����
void f2(Point& p2) {} // call by reference : ���纻 ��ü ���� ����

int main()
{
	Point pt;
	f1(pt);
	f2(pt);
}
*/


// �� �ڵ带 �� �����ϸ鼭, �Ʒ� �ڵ带 ������
Point pt = { 1,2 };

Point f3()  // return by value
{
	return pt; // ��¥ pt�� ��ȯ�ұ�� ?
			   // �� ���� pt�� ������ ���Ͽ� �ӽð�ü
			   // �� �����ǰ� �ӽð�ü�� ��ȯ�˴ϴ�.
}

int main()
{
	f3().x = 10; // error. �ӽð�ü�� ��ȣ�� ���ʿ� �ü� �����ϴ�.
				 // ���Ͽ� �ӽð�ü�� �Լ� ȣ�⹮���� ������ �ı� �˴ϴ�.

	std::cout << "-----" << std::endl;
}