#include <iostream>
#include <string>
#include <memory>

struct Person
{
	std::string name;
//	std::shared_ptr<Person> bestFriend; // ���� ��� ����
	
	Person* bestFriend; // raw pointer �� ��������ʹ� ���� �����ϴ�.

	Person(const std::string& n) : name(n) {}
	~Person() { std::cout << name << " �ı�" << std::endl; }
};

int main()
{
	std::shared_ptr<Person> p1(new Person("kim"));
	std::shared_ptr<Person> p2(new Person("lee"));

	// bestFriend�� ����Ʈ�����Ͱ� �ƴϹǷ� p2.get()�ϸ�
	// p2�� ����Ű�� raw pointer ������ �ֽ��ϴ�.
	p1->bestFriend = p2.get();
	p2->bestFriend = p1.get();

	// ���� �ڵ�� �ڿ�����(�޸𸮻����ȵ�)
	// �� ������ �ذ��߽��ϴ�.

	// �׷���,,, 5-2 �ҽ��� ������ �ֽ��ϴ�.

}