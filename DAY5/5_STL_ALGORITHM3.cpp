#include <iostream>
#include <vector>
#include <list>
#include <algorithm> 

// ������(predicator) : ��ȯŸ���� bool �� �Լ�
bool fn(int n) { return n % 3 == 0; }

int main()
{
	std::list<int>   s = { 1, 6, 2,3,4,5 };

//	auto ret2 = std::find_if(s.begin(), s.end(), fn );

	// C++11 ����ǥ����
	// �͸��� �Լ��� ����� ����
	// [] : lambda introducer. ����ǥ������ ���۵��� �˸��� ��ȣ
	auto ret2 = std::find_if(s.begin(), s.end(),
								[](int n) { return n % 3 == 0; });



	std::cout << *ret2 << std::endl; 
}