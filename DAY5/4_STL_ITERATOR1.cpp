// 7_STL_ITERATOR1
#include <iostream>
#include <list>
#include <vector>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	// �迭�� ���ӵ� �޸� �̹Ƿ� 1��° ����� �ּҸ� �˸� ��� ��Ҹ� ��ȸ�Ҽ� �ִ�.
	int* p1 = x;
	++p1; // ���� ��ҷ� �̵�


	std::list<int> s = { 1,2,3,4,5 };

	// STL �� ��� �����̳ʿ��� �����͸� �䳻�� �ݺ���(iterator)��� 
	// ������ �ֽ��ϴ�.
	// iterator�� ����ϸ� ������ ó�� ++�� ����ؼ� ����Ҹ� �����Ҽ� �ֽ��ϴ�.

	auto p = s.begin(); // list�� ó���� ����Ű�� �ݺ���

	// p�� ������ó�� �����ϰ� ����ϸ� �˴ϴ�.
	++p; // p.operator++() �Լ� ȣ��

	std::cout << *p << std::endl; //2
}