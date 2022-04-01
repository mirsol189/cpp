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
	std::cout << sizeof(Car*) << std::endl;
	std::cout << sizeof(sp1) << std::endl;

	// �ٽ� 2. ����Ʈ �����ʹ� ������ ���ҵ� ������ ��ü�� "��ü"�Դϴ�.
	// -> �� �ƴ϶� . �� �����մϴ�

	// -> : ���ü(Car)�� ��� �Լ� ����
	sp1->Go(); // sp1.operator->()


	// . : �ڽ�(shared_ptr)�� ��� ����
	int n = sp1.use_count();
	std::cout << n << std::endl;

}
// ���̽� �� ��� ������ �ᱹ "����Ʈ������ó�� �����մϴ�."
//n1 = 10  
//n2 = n1  

// Swift �� ��� ��ü ������ "ARC" ��� �������� �����մϴ�.
// Automatic Reference Counting
// => �ᱹ ����Ʈ������ ���� �ϻ��Դϴ�.