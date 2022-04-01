#include <iostream>
#include <string>
#include <memory>

struct Person
{
	std::string name;
	// std::shared_ptr<Person> bestFriend; // ���� ��� ����
	// Person* bestFriend; 

	std::weak_ptr<Person> bestFriend; // ���� ��� ��������
									  // ��ü �ı� ���� ���� ����


	Person(const std::string& n) : name(n) {}
	~Person() { std::cout << name << " �ı�" << std::endl; }
};

int main()
{
	std::shared_ptr<Person> p1(new Person("kim"));
	{
		std::shared_ptr<Person> p2(new Person("lee"));

		p1->bestFriend = p2;
		p2->bestFriend = p1;
	}

	if (p1->bestFriend.expired() )
	{
		std::cout << "��� ��ü �ı���" << std::endl;
	}
	else
	{
		// �ı� ���� ���� ����
		// auto n = p1->bestFriend->name; // error.. weak �� -> ������ �ȵ�.

		// weak ��
		// 1. ��������� �������� �����Ƿ� weak �� ��ü ���ٽ�
		//    ����߿� ��ü�� �ı��ɼ� �ֽ��ϴ�.

		// 2. �׷��� weak �δ� ��ü ���� �ȵ˴ϴ�.

		// 3. �����ϰ� ������ ���� ��� �����ϰ� �����ؾ� �մϴ�.

		// 4. ��������� �����ϴ� ����� shared_ptr�� ������ �մϴ�.

		// ���, weak �� ����ؼ� shared_ptr �� �����Ŀ�
		// shared_ptr�� ��ȿ���� ������
		// ��ü ����
		
		std::shared_ptr<Person> sp = p1->bestFriend.lock();

		if (sp)
		{
			// ���� sp�� ��ü ����
			std::cout << sp->name << std::endl;
		}
	}

}