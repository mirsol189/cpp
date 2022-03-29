// 9_초기화리스트1-1
#include <string>

class Person1
{
	std::string name;
	int age;
public:
	Person1(const std::string& s, int a) 
	{
		name = s;
		age = a;
	}
};

class Person2
{
	std::string name;
	int age;
public:
	Person2(const std::string& s, int a) : name(s), age(a)
	{
	}
};
int main()
{
	Perso1 p1("kim", 10);
	Perso2 p2("kim", 10);
}