#include <iostream>

void foo(int n)    { std::cout << "int" << std::endl; }
void foo(double n) { std::cout << "double" << std::endl; }
void foo(bool n)   { std::cout << "bool" << std::endl; }
void foo(int* n)   { std::cout << "int*" << std::endl; }

int main()
{
	foo(0); // 
	foo(0);
}
