// 8_����Ʈ������4
#include <iostream>

// ����Ʈ������ ����
// 1990��뿡 "ó�������� �����ϰ�"
// 2000���� "boost" ��� ���̺귯������ "shared_ptr" �̶�� ����Ʈ������ ����    
// 2011��(C++11) ���� "shared_ptr" �� C++ ǥ������ ä��

#include <memory> // C++ ǥ���� ����Ʈ������(shared_ptr) �� ���� ���. 


class Car
{
	int speed;
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car() { std::cout << "~Car" << std::endl; }
};

int main()
{
//	std::shared_ptr<Car> sp1 = new Car; // error. explicit ������
	std::shared_ptr<Car> sp1(new Car); // ok 

	std::shared_ptr<Car> sp2 = sp1; // ok. ���� ������, ���� ��� ����

	// �ٽ� 1. ����Ʈ�������� ũ��
	std::cout << sizeof(sp1) << std::endl;

}