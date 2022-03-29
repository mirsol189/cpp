#include <iostream>

// �̹� C++ ǥ�ؿ� ���ø� ������� ������� stack �� �ֽ��ϴ�.
#include <stack>

// STL ( Standard Template Library )
// C++ ǥ���� �����ϴ� "���ø� ����� ���̺귯��"

int main()
{
	std::stack<int> s; 

	s.push(10);
	s.push(20);

	// ���� ! ������ �Լ��� �����Լ��� �и��Ǿ� �ֽ��ϴ�.
	std::cout << s.top() << std::endl; // �����⸸, ���žȵ� 20 
	std::cout << s.top() << std::endl; // �����⸸, ���žȵ� 20

	s.pop(); // ���Ÿ�, ��ȯ�� �ȵ�.
	std::cout << s.top() << std::endl; // 10
}

