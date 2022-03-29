// 4_접근지정자    74page ~

struct Bike
{
private:
	int gear;

public:
	// 잘 정의된 멤버 함수를 통해서 객체의 상태(멤버 데이타)를 변경하면
	// 항상, 객체의 상태가 안정하게 될수 있다.
	void setGear(int value)
	{
		if ( value > 0 && value < 21 )
			gear = value;
		else
		{
			// 잘못된 값이 왔다고 호출자에게 알려준다.
			// 예외 등의 문법 사용..
		}
	}
};

int main()
{
	Bike b;
//	b.gear = -10;
	b.setGear(-10);

}
