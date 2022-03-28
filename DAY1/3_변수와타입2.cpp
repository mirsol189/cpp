// 3_변수와타입2.cpp - 22 page
#include <iostream>

// 일관된 초기화(uniform initialization) 기술

struct Point
{
	int x = 0;
	int y = 0;
};

int main()
{
	int n1 = 0;
	int x1[2] = { 1,1 };
	Point pt1 = { 1,1 };
}