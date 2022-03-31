#include <iostream>

// ���� ��� ���� "���̾Ƹ�� ���"����� ������
// "virtual ���"�� ����ؾ� �մϴ�.

class X
{
public:
	int x;
};
class A : virtual public X
{
public:
	int a;
};

class B : public virtual X
{
public:
	int b;
};
class C : public A, public B
{
public:
	int c;
};

int main()
{
	C ccc;
	ccc.x = 100;

	ccc.A::x = 200;
//	ccc.B::x = 300;

	std::cout << ccc.x << std::endl; // 300
}

