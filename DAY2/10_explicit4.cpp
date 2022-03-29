// 10_explicit4.cpp
#include <iostream>

// initializer_list : C++11 ���� ���� ����, ������ ���ڷ� �θ� ����
//					  ���ڸ� ��� ������ �ֽ��ϴ�.

class Vector
{
public:
	explicit Vector(int sz) { std::cout << "Vector(int)" << std::endl; } // 1
	Vector(std::initializer_list<int> e) { std::cout << "Vector(initializer_list)" << std::endl; } // 2
};

int main()
{
	Vector v1(10); // 1
	Vector v2{10}; // 2�� ȣ��, ������ 1�� ���
	
//	Vector v3(10,20); // error
	Vector v4{ 10, 20 }; // ok.. 2�� ȣ��

//	Vector v5 = 10;     // error  explicit 
	Vector v6 = { 10 }; // ok     explicit �ƴ�..
}