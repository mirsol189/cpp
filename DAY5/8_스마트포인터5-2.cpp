#include <iostream>
#include <string>
#include <memory>

struct Person
{
	std::string name;
	//	std::shared_ptr<Person> bestFriend; // ���� ��� ����

	Person* bestFriend; // raw pointer �� ��������ʹ� ���� �����ϴ�.
					// ������ : dangling pointer ������ �߻��Ҽ� �ֽ��ϴ�.
					//         C���� �ʹ��� ������ ����
					//         �̹����� �ذ��ϴ� ������ weak_ptr �Դϴ�.

	Person(const std::string& n) : name(n) {}
	~Person() { std::cout << name << " �ı�" << std::endl; }
};

int main()
{
	std::shared_ptr<Person> p1(new Person("kim"));
	{
		std::shared_ptr<Person> p2(new Person("lee"));

		p1->bestFriend = p2.get();
		p2->bestFriend = p1.get();
	}

	// �Ʒ� �ڵ� ������ ������.
	if (p1->bestFriend != nullptr)
	{
		auto n = p1->bestFriend->name;
	}

}