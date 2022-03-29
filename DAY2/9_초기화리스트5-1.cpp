// 9_초기화리스트5 - 1
#include <iostream>

int g = 10;

class Test
{
	int v1 = 0;
	int v2 = ++g;
public:
	Test() {}
	Test(int n) :v2(n) {}
};
int main()
{
	Test t1;
	Test t2(5);
	std::cout << g << std::endl; // ?? 
}