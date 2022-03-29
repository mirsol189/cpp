#include <iostream>
#include <initializer_list>

void f(std::initializer_list<int> st)
{
	for (auto n : st)
	{
		std::cout << n << std::endl;
	}	
}