// const member function (상수 멤버 함수 )라는 문법은 

// 1. 선택이 아닌 필수 문법입니다.

// 2. 어떤 멤버 함수가 내부적으로 객체의 상태(멤버 데이타)를 수정하지 않는다면
//    반드시 상수 멤버 함수로 해야 합니다.

// 3. getter(getxxx()류의 함수들)은 반드시 상수 멤버 함수로 하세요

class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d) {}

//	int getArea() { return w * h; } // 사실 이코드는 틀린 코드 입니다.
	int getArea() const { return w * h; } // 반드시 상수 멤버함수가 되야 합니다.
};

//void foo(Rect r)		// 사용자 정의 타입을 call by value 로 하는 것은 나쁜 코드 입니다.
void foo(const Rect& r) // 항상 const reference 가 좋습니다.
{
	int n = r.getArea(); // ????
}

int main()
{
	Rect r(1, 1, 10, 10); // 상수 객체 아닙니다.

	int n = r.getArea();  // OK.. 아무 문제 없습니다.
	
	foo(r);
}



