#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d", n); return *this; }
		ostream& operator<<(double d) { printf("%lf", d); return *this; }
		ostream& operator<<(const char* s) { printf("%s", s); return *this; }
	};
	ostream cout;

	// endl 은 놀랍게도!! 함수 입니다.
	ostream& endl(ostream& os)
	{
		os << "\n";
		return os;
	}
}

int main()
{
	// endl 을 만들어 봅시다. - endl 은 함수 입니다.
//	std::cout << std::endl; 

	std::endl( std::cout ); // 이 코드가 위와 동일한 기능입니다.

}


