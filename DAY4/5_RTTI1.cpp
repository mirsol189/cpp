#include <iostream>

int main()
{
	int n = 10;

	// Ư�� ������ Ÿ���� �˰� ������ "typeid" ��� �����ڸ�
	// ����ϸ� �˴ϴ�.
	const std::type_info& t = typeid(n);

	std::cout << t.name() << std::endl;

}