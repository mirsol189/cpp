// 6_cout - 187(136)page
#include <iostream>


namespace std
{
	class ostream
	{
		// operator<<() 
	};
	ostream cout; // cout은 객체(전역변수)입니다.
}
// cout 의 원리
int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double)
	
}


