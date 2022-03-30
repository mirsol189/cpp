// 5_상속1.cpp   132page ~
#include <iostream>
#include <string>

// Person  : Base Class(기반클래스),  Super Class, Parent Class
// Student : Derived Class(파생클래스), Sub Class, Child Class

// 1. 모든 사람이 가져야하는 특징으로 "Person" 타입 설계

class Person
{
	std::string name;
	int age;
};

// 2. 기존 타입(Person)을 확장해서 새로운 타입을 설계 한다.
// 상속(inheritance) : 기존 타입을 확장해서 새로운 타입을 만드는 문법

// C++       : class Student : public Person
// C#, Swift : class Student : Person
// java      : class Student extends Person
// Python    : class Student(Person)

class Student : public Person
{	

	int    id;
};

class Professor : public Person
{
	int    major;
};





int main()
{
	Student s;
	Professor p;
}

