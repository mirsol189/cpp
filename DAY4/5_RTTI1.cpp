#include <iostream>

int main()
{
	int n = 10;

	// Ư�� ������ Ÿ���� �˰� ������ "typeid" ��� �����ڸ�
	// ����ϸ� �˴ϴ�.
	// typeid()�� ��ȯ Ÿ���� type_info ��ü�ε�.. 
	// �ݵ�� const & �� �޾ƾ� �մϴ�.
	const std::type_info& t = typeid(n);

	std::cout << t.name() << std::endl;


	double* p = reinterpret_cast<double*>(&n);

	std::cout << typeid(p).name() << std::endl; // double*
	std::cout << typeid(*p).name() << std::endl; // double
								// ��, ������ ���󰡼� �����ϴ°��� �ƴϰ�
								// double* �̹Ƿ� * �ϸ� double �̰��� !!
								// ��� ������ �ð��� �Ǵ�

	// Ÿ���̸��� ����ϴ� ���� �ƴ϶� �����Ϸ���
	const std::type_info& t1 = typeid(n);   // typeid(����)
	const std::type_info& t2 = typeid(int); // typeid(Ÿ��)

	if (t1 == t2) {}

	// ���������� �׳� �Ʒ� ó�� �ϼ���
	if (typeid(n) == typeid(int)) //!!
	{

	}

}