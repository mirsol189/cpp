#include <iostream>

int connectServer()
{
	if (1)		 
		throw 1; 

	return 0;
}

int main()
{
	try
	{
		connectServer();

		//... 성공시 코드...
	}
	catch (int n)
	{
		std::cout << "예외발생. catch 하면 프로그램 계속실행가능" << std::endl;
	}

	std::cout << "프로그램 계속 실행" << std::endl;
}