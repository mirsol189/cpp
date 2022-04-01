#include <iostream>
#include <string>
#include <memory>

struct Person
{
	std::string name;

	Person(const std::string& n) : name(n) {}
	~Person() { std::cout << name << " ÆÄ±«" << std::endl; }

	std::shared_ptr<Person> bestFriend;
};

int main()
{
	std::shared_ptr<Person> p1(new Person("kim"));
	std::shared_ptr<Person> p2(new Person("lee"));
}