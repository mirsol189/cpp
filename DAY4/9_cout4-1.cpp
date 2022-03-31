#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n) { printf("%d", n); return *this; }
		ostream& operator<<(double d) { printf("%lf", d); return *this; }
		ostream& operator<<(const char* s) { printf("%s", s); return *this; }
	
		ostream& operator<<(ostream&(*f)(ostream&))
		{
			f(*this);
			return *this;
		}
	};
	ostream cout;

	ostream& endl(ostream& os)
	{
		os << "\n";
		return os;
	}
}
int main()
{
	std::cout << std::endl; // cout.operator<<(endl)
						    // cout.operator<<(함수포인터)
						    // cout.operator<<( ostream&(*f)(ostream&) )
	std::endl( std::cout ); 

}


