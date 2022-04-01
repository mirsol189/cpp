#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// �����̳ʿ��� 3�� ã�� �ʹ�.
	// ��� 1. ��ü���� ������.
//	s.find(3); // ����ϱ� �����ϴ�.
//	v.find(3); // �׷���, ��� �����̳ʿ� find�� ������ �մϴ�.

	// STL �� ��κ��� �ֿ� �Լ��� ��� �Լ��� �ƴ� �Ϲ� �Լ��� �Ǿ� 
	// �ֽ��ϴ�.
	auto ret1 = std::find( s.begin(), s.end(), 3 );
	auto ret2 = std::find( v.begin(), v.end(), 3 );

	// ��ȯ ���� "3"�� ����Ű�� �ݺ���(������ó������)�Դϴ�.
	// �˻� ���д� last(s.end())�� ���ɴϴ�.

	if (ret1 == s.end())
	{
		std::cout << "�˻� ����" << std::endl;
	}
	else
	{
		std::cout << "�˻� ���� : " << *ret1 << std::endl;
	}
}