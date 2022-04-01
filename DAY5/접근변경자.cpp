// 접근변경자
class Base
{
private: int a;
public:  int b;
};
// 접근 변경자.. 기반 클래스의 멤버 보호속성을 좁힐때 사용
//             넓힐수는 없다.
//class Derived : public Base
class Derived : private Base  
{
};
int main()
{
	Derived d;
	d.a = 10; // error
	d.b = 10; // error. private 상속을 했으므로
				//		b의 보호속성은 private

	Base b;
	b.b = 10; // ok.. Base 안에서 b 는 public 
}