#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


class People
{
	char* name;
	int   age;
public:
	People(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	~People() { delete[] name; }

	// 클래스 내부에 포인터 멤버가 있다면
	// 사용자가 직접 복사생성자를 만들어서
	// 얕은복사(shallow copy) 문제를 해결해야 합니다
	// 아래 처럼 "메모리 자체를 복사" 하는 기술을 
	// "깊은 복사(Deep Copy)" 라고 합니다.
	People(const People& p) : age(p.age)
	{
	//	age = p.age;

		name = new char[strlen(p.name) + 1];

		strcpy(name, p.name);
	}
};

int main()
{
	People p1("kim", 20);
	People p2 = p1;
}





