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

std::ostream& tab(std::ostream& os)
{
	os << "\t";
	return os;
}

std::ostream& menu(std::ostream& os)
{
	os << "1. ���\n";
	os << "2. ���\n";
	return os;
}

int main()
{
	std::cout << std::endl; 
	
	// tab �� menu�� ����� ���ô�.

	// std::cout << tab

	std::cout << "A" << tab << "B" << std::endl;

	std::cout << menu;

}


