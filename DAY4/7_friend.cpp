#include <iostream>

class Bike
{
	int gear = 0;
public:
//	void setGear(int n) { gear = n; }

	// friend �Լ� : ��� �Լ��� �ƴ����� private �� ���ٰ����ϰ� �ش޶�� ��
	// 1. ����� �ϸ� �Ǵµ�.. �� ? : "����Լ��� ����� �������� �ִ�.(������ ������)"
	
	// 2. set/get ����� �Ǵµ� �� ? : get/set �� �����ϴ� ���� ��������
	//							��������ϰڴٴ� �ǹ�..
	//							�Ʒ� �ڵ�� fixBike ������ �����ϰڴٴ°�

	// ĸ��ȭ�� ���� �ϹǷ� ���� ���� �����̶�� �� �˴ϴ�.
	// �׷���, C++�� ������ ��κ��� ��ü������� �� ������ �����ϴ�.
	// ������ C++������ �� ���� Ȱ��˴ϴ�.
	friend void fixBike(Bike& b);
};

void fixBike(Bike& b)
{
	b.gear = 10;

	Bike b2;
	b2.gear = 20;
}

int main()
{
	Bike b;
	fixBike(b);
}