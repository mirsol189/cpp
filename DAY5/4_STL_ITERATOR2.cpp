#include <iostream>
#include <list>
#include <vector>

int main()
{
//	std::list<int> s = { 1,2,3,4,5 };
	std::vector<int> s = { 1,2,3,4,5 };

	// 1. ��Ȯ�� Ÿ��
//	std::list<int>::iterator p1 = s.begin();
	auto p1 = s.begin();

	// ��Ȯ�� Ÿ���� ������� ������
	// (1) ������ ���δ�.
	// (2) �����̳� ����� �ڵ� ���� �ʿ�

	// 2. past the end
	auto p2 = s.begin(); // ó�� ���
	auto p3 = s.end();   // ������ ��Ұ� �ƴ� ������ ���� ���

	*p2 = 10; // ok
	*p3 = 10; // runtime error. ���� .end()�� ���� �ݺ��ڴ�
				// * �ϸ� �ȵ˴ϴ�.

	// ==, != �� �񱳸� �ؾ� �մϴ�.
	while (p2 != s.end())
	{
		std::cout << *p2 << std::endl;
		++p2;
	}

	// 3. ��� begin vs non member begin
//	std::list<int>   c = { 1,2,3 };
//	std::vector<int> c = { 1,2,3 };
	int c[5] = { 1,2,3,4,5 };

//	auto p5 = c.begin();    // error. raw array �� begin ����
	auto p5 = std::begin(c);// ok. c�� STL �����̳ʶ� �ǰ�
							//     raw array �� ok

	// QA : ++ ������
	++p; // p.operator++() ȣ��
	p++; // p.operator++(int) ȣ��. �������� �����ϱ�����
		//						�������� ������int �� �־�� �Ѵ�.
}







/*
namespace std
{
	template<typename T>
	class list
	{
	public:
		class iterator
		{
		};
	};
}
*/