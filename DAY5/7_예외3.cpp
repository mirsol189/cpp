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

		//... ������ �ڵ�...
	}
	catch (int n)
	{
		std::cout << "���ܹ߻�. catch �ϸ� ���α׷� ��ӽ��డ��" << std::endl;
	}

	std::cout << "���α׷� ��� ����" << std::endl;
}