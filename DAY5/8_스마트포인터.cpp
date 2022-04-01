// 7_����Ʈ������ - 201(150)
#include <iostream>

class Car
{
	int speed;
public:
	void Go() { std::cout << "Car Go" << std::endl; }
	~Car()    { std::cout << "~Car"   << std::endl; }
};

// ����Ʈ ������(smart pointer) ����
// ���� : ���� Ÿ���� "��ü" �� "�ٸ� Ÿ���� ������" ��Ȱ�� �ϴ� ��
// ���� : ->, * �����ڸ� �������ؼ� ������ ó�� ���̰� �ϴ� ��
// ���� : raw pointer �� �ƴ϶� ��ü ��� ��.
//       ����/����/����/�Ҹ��� ��� �������� �߰� �۾��� �����Ҽ� �ִ�.
//       ��ǥ���� ��, �Ҹ��ڿ��� "delete" ����� ������ �ڵ� ���� ����� ������
//      ����Ʈ�����͸� ����� �ִ�.

class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}
	
	~Ptr() { delete obj; }

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }
};
int main()
{
	// Car* p = new Car;

	// �Ʒ� 2���� �� �����غ�����
	// "p" �� "Ptr" Ÿ���� "��ü" �Դϴ�.
	// �׷���, "Car" Ÿ���� "������" ó�� ���˴ϴ�.

	Ptr p = new Car; // Ptr p( new Car )

	p->Go(); // (p.operator->())Go() �ε�
			 // (p.operator->())->Go() �� ������� �ؼ��˴ϴ�.

	// p�� ��¥�� ������ ó�� ���̰� �Ϸ��� �Ʒ��ڵ嵵 �Ǿ�� �մϴ�.
	(*p).Go(); // (p.operator*()).Go()

	//delete p;
} // <== p�� raw pointer ��� ������ ������ �ı�
  //     p�� ��ü(Ptr) ��� Ptr �Ҹ��� ȣ��
  //     �Ҹ��ڿ��� �ڽ��� ����ϴ� �ڿ��� ������ delete �ϸ�
  //     ����ڰ� delete ���ʿ� ����.



