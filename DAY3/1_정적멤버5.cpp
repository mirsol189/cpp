
// Car.h
class Car
{
	int color;
	static int cnt;
public:
	Car();
	~Car();

	static int get_count();
};

// Car.cpp
#include "Car.h"

int Car::cnt = 0; 

Car::Car() { ++cnt; }
Car::~Car() { --cnt; }

// static 멤버 함수를 외부에 구현시 "static" 은 표기하지 않습니다.
int Car::get_count() 
{
	return cnt; 
}