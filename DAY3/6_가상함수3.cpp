#include <iostream>
// �ٽ� : ��� Ŭ������ �Ҹ��ڴ� �ݵ�� �����Լ� �̾�� �Ѵ�.
class Base
{
public:
	virtual ~Base() {}
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "�ڿ� �Ҵ�" << std::endl; }
	~Derived() { std::cout << "�ڿ� �ݳ�" << std::endl; }
};
int main()
{
//	Derived d;

	Base* p = new Derived; // 1. sizeof(Derived)�� �޸� �Ҵ�
						   // 2. Derived ������ ȣ��

	delete p;	// 1. �Ҹ��� ȣ��
				//   p �� Base* �̹Ƿ� Base �Ҹ��ڸ� ȣ��.
				//   => �ذ�å, p Ÿ���� �ƴ� ��ü������ ȣ��Ǿ�� �մϴ�.
				//   => �Ҹ��ڸ� �����Լ���!!

				// 2. p�� ����Ű�� �޸� �ı�
}