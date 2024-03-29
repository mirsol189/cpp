﻿#include <iostream>

// Step 8. 클래스를 만들지 말고, 클래스를 찍어낼수 있는 "틀(템플릿)" 을 만들자

template<typename T> 
class Stack
{
private:	
	T*  buff;
	int  idx;

public:
	Stack(int size = 10)
	{
		idx = 0;
		buff = new T[size];
	}

	~Stack()
	{
		delete[] buff; 

	}
//	void push(int value) {} // int 이므로 call by value

	void push(  const T& value) { buff[idx++] = value; }

	T pop() { return buff[--idx]; }
};

int main()
{
	// 함수 템플릿 : 타입인자 생략시 "함수인자"로 타입추론
	// 클래스 템플릿 : 반드시 타입인자 전달해야 합니다.
	Stack<int> s1(20);
	Stack<double> s2(20);

	s1.push(10);
	s1.push(20);

	std::cout << s1.pop() << std::endl;


}







