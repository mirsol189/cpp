// 9_�ʱ�ȭ����Ʈ1-1
#include <string>

// string Ŭ������ ���� �̸��� "basic_string"

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
		// ������� �ʿ��� ��츸 ���⼭ �ڵ带 �ۼ��ϼ���.
		// �ܼ��� ��� �ʱ�ȭ�� ��ó�� �ʱ�ȭ ����Ʈ ����ϼ���.
	}
};
int main()
{
	Person1 p1("kim", 10);
	Person2 p2("kim", 10);
}