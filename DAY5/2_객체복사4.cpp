// 2_��ü����4

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

// ���ڿ��� �ʿ��ϸ� "std::string" �� ����ϸ�ȴ�.
// char* �� ����������� STL �� �������.!!

// int* p = new int[10]; ��� vector<int> v(10)

// ���� �ڿ��� �������� ����, �ڿ��� �ڵ����� �����ϴ� Ÿ�Ե��� �������!

class People
{
//	char* name;
	std::string name;
	int   age;
public:
	People(const std::string& s, int a) : name(s), age(a)
	{
	}
};

int main()
{
	People p1("kim", 20);
	People p2 = p1;
}





