#include <iostream>

struct Point  
{
	int x;
	int y;
	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt = { 1,2 };

Point f3()  
{
	return pt;
}

int main()
{
//	f3().x = 10;

	f3();

	std::cout << "-----" << std::endl;
}