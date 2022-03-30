// 3_추상클래스 - 168(216)page

// 추상 클래스 : 순수 가상함수가 한개 이상 있는 클래스
// 특징 : 객체를 생성할수 없다.
// 의도 : 파생클래스에게 특정 함수를 반드시 만들라고 지시하는것. 
class Shape
{
public:
	virtual void Draw()  = 0; // 순수 가상함수 (pure virtual function)
							  // 특징 : 구현이 없다
};
class Rect : public Shape
{
public:
	// Draw()의 구현부를 제공하지 않으면 "Rect 도 추상"
	//         구현부를 제공하면 추상 아님( 객체 생성 가능)
};

int main()
{
	Shape s; // error. 추상 클래스는 객체를 만들수 없다.
	Shape* p; // ok... 포인터는 가능.. 이 경우 파생 클래스 객체를 가리키겠다는것
	Rect  r; // ?
}


