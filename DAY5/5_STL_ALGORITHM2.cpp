#include <iostream>
#include <vector>
#include <list>
#include <algorithm> 

// ������(predicator) : ��ȯŸ���� bool �� �Լ�
bool fn(int n) { return n % 3 == 0; }

int main()
{
	std::list<int>   s = { 1, 6, 2,3,4,5 };

	// �־��� �������� 3�� ã�� �ʹ�!
	auto ret1 = std::find(s.begin(), s.end(), 3);

	// �־��� �������� ù��° ������ "3�� ���" �� ã�� �ʹ�.??
	// std::find(    first, last, ��)
	// std::find_if( first, last, ����(�Լ�))

//	auto ret2 = std::find_if(s.begin(), s.end(), �Լ� );
	auto ret2 = std::find_if(s.begin(), s.end(), fn  );

	std::cout << *ret2 << std::endl; // 6
}