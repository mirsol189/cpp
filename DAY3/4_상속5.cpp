// ���5.cpp
#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	// ���� ��ü������ Ʈ����� "�ݵ�� �ʱ�ȭ �� ��ü"�� ����ϵ�������
	Person(const std::string& n, int a) : name(n), age(a) {}
};

// �������� "����Ʈ �����ڰ� ����" Ŭ������ �����ϴ�.
class Student : public Person
{
	int    id;
public:
//	Student(int n) : id(n) {} // Student(int n) : Person(), id(n) {} 

	// �ٽ� : Person �� ����Ʈ �����ڰ� �����Ƿ�
	//       Student �����ڸ� �Ʒ�ó�� ������ �մϴ�.
	Student(const std::string& name, int age, int id)
		: Person(name, age), id(id)
	{
	}
};


int main()
{
	Person p("kim", 30);

	Student s("kim", 30, 99);
}

