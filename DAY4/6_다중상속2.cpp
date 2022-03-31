#include <iostream>

// 다중 상속 사용시 "다이아몬드 상속"모양이 나오면
// "virtual 상속"을 사용해야 합니다.

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

