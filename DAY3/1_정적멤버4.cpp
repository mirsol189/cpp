// 핵심 1. static 멤버 데이타 : 객체가 없어도 메모리에 있다.
//     2. static 멤버 함수 : 객체없이 호출가능하다.
//    3. static 멤버 함수 에서는 "static 멤버" 만 접근 가능하다.
class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요
	void foo()	
	{
		// foo 를 호출했다는 것은 "객체를 만들었다" 라는 의미!! 그러므로, 항상 멤버 데이타가 메모리에 있다
		color = 0;	// 1.
		cnt = 0;	// 2.
		goo();		// 3
	}
	static void goo()	
	{
		color = 0;	// 4. error. 객체가 있어야만 메모리에 존재하는 멤버.. 
		cnt = 0;	// 5. ok.    객체가 없어도 메모리에 존재
		foo();		// 6. error
	}
};
int Car::cnt;

int main()
{
	Car::goo();
//	Car c;
//	c.goo();
}
