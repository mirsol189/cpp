// 1. C++은 다중 상속 지원 합니다.
//    => 그런데, 사용하지 말라고 권장합니다.

class X
{
public:
	int x;
};
class A : public X
{
public:
	int a;
};
class B : public X
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
//	ccc.x = 100; // error. 어느 x인지 알수 없다.
	
	// 아래 처럼 하면 접근 가능합니다.
	ccc.A::x = 100;
	ccc.B::x = 200;
}

// java, C# : 2개이상의 클래스로 부터 상속안됨.(다중 상속 지원 안함)
//            단, 한개의 클래스와 여러개의 인터페이스는 가능
/*
class AAA : BBB, ITERFACEA, INTERFACE // ok
{
};
class AAA : BASECLASSA, BASECLASSB  // error
{
};
*/