// 6_cout - 187(136)page
#include <iostream>


namespace std
{
	class ostream
	{
		// operator<<() 
	};
	ostream cout; // cout�� ��ü(��������)�Դϴ�.
}
// cout �� ����
int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double)
	
}


