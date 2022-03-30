#include <iostream>

struct Point  
{
	int x;
	int y;
	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt = { 1,2 };

Point f3()  
{
	return pt;
}

Point& f4()  // return by reference : ���Ͽ� �ӽð�ü�� ������ ����
{			 //						 pt ��ü�� ��ȯ�� �޶�� �ǹ�(alias��ȯ)
	return pt;
}

int main()
{
//	f3().x = 10; // error. �ӽ� ��ü
//	f3();
//	f4();
	f4().x = 10; // ok..   pt.x = 10   ���� ��ȯ�̹Ƿ� �ӽð�ü �ƴ�.

	std::cout << "-----" << std::endl;
}