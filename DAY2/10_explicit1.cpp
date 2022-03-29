class Bike
{
	int gear;
public:
	// explicit 생성자 : 직접 초기화 만 가능하고
	//					복사 호기화 는 사용할수 없다.
	explicit Bike(int n) : gear(n) {}
};

void foo(Bike b) {} // Bike b = 함수인자(7)
					// 즉, 함수의 인자 전달은 "복사 초기화 구문"입니다.

int main()
{
	// 인자가 int 한개인 생성자가 있으면 아래처럼 객체를 만들수 있습니다.
	// C++98 시절 부터 지원
	Bike b1(7);		// direct initialization
	Bike b2 = 7;	// copy   initialization

	// C++11 부터 가능
	Bike b3{ 7 };	// direct initialization
	Bike b4 = { 7 };// copy   initialization

	foo(7); // ?
}