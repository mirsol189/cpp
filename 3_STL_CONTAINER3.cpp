#include <iostream>

// ���� �����̳� 3��
#include <vector>
#include <list>
#include <deque> 

// ���� �����̳�

// set : ���� ���� ����(������, ������, �����յ�) �� �����ϴ� Ÿ��
//       C++ ������ "tree" �� �����Ǿ� ����. - �������� 2��Ʈ��(�ַ� RBTree ���)

#include <set>	  // tree �� ������ set
				  // C++98

#include <unordered_set>  // hash �� ������ set
						  // C++11 ����

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	std::set<int> s = { 50, 30, 80, 40, 70, 20, 90, 10 };


	std::unordered_set<int> us = { 50, 30, 80, 40, 70, 20, 90, 10 };
}

