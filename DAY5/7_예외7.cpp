#include <iostream>

void foo()
{
}

int main()
{
	// noexcept : �Լ��� ���� ���ɼ��� �ִ��� ����
	//			  ������ �Լ��� ȣ���ϴ� ���� �ƴ�
	bool b = noexcept( foo() );

	if (b)
		std::cout << "foo ���� ���ɼ� ����. �׻� ����" << std::endl;
	else
		std::cout << "foo ���� ���ɼ� ����" << std::endl;

}