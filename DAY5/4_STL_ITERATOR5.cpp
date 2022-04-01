#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::vector<int> c = { 1,2,3,4,5 };

	// �����̳��� ��� ��Ҹ� ���� �ϴ� ��� 
	// 1. [] ������ ���- ��, list �� �ȵ�.
	for (int i = 0; i < c.size(); i++)
	{
		std::cout << c[i] << std::endl;
	}

	// 2. �ݺ��� ��� - ��� �����̳ʿ� ��밡��
	auto p1 = c.begin();

	while (p1 != c.end())
	{
		std::cout << *p1 << std::endl;
		++p1;
	}

	// 3. C++11�� ���ο� for �� ��� - range - for
	for (auto& e : c)
	{
		e = 0;
	}

	std::vector<Rect> v;
	v.push_back(Rect(0, 0, 10, 10));

//	for (auto e : v) // auto�� Rect �Դϴ�, ���纻 ������ �������
//	for (auto& e : v) //���纻 ������� ����. �׷���, e�� ��������
	for (const auto& e : v) //���纻 ������� ����. e�� �����ȵ�
	{

	}
}