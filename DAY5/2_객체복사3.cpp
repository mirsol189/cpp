#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class People
{
	char* name;
	int*  ref;  // 참조계수 관리를 위한 멤버
	int   age;
public:
	People(const char* n, int a) : age(a)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		
		ref = new int;
		*ref = 1;
	}





	// 아래 복사 생성자가 참조 계수로 구현한 복사 생성자 입니다.
	People(const People& p) : name(p.name), ref(p.ref), age(p.age)
	{
		++(*ref);
	}

	// 참조계수 사용시 자원 제거는 
	// 참조계수가 0일때만 해야 합니다.
	~People() 
	{ 
		if (--(*ref) == 0)
		{
			delete[] name;
			delete ref;
		}
	}
};

int main()
{
	People p1("kim", 20);
	People p2 = p1;
	People p3 = p1;
	People p4 = p1;
}





