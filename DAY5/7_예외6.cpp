#include <iostream>
#include <string>

class file_not_found {};

void foo()
{
	throw file_not_found();
}
void goo()
{
	try
	{
		foo();
	}
	catch (...)
	{
		throw; // 현재 발생된 예외를 다시 발생
	}
}
int main()
{
	try
	{
		goo();
	}
	catch (...)
	{
	}
}
