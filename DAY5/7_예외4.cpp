#include <iostream>
#include <string>

// ����(����)���� Ÿ���� �����ϴ� ���� �����ϴ�.
class bad_url_exception
{
	int code;
	std::string description;
public:
	bad_url_exception(int n) : code(n) {}

	// �پ��� ����� ���� ������ �˷� �ּ���..
};
// �Ǵ� �Ʒ�ó�� empty class �θ� �����ص� ������ �ʽ��ϴ�.
// �̸� ��ü�� �����Դϴ�.
class file_not_found {};

int connectServer()
{
	if (1)
	{
//		Point pt(1, 2); // �̸� �ִ� ��ü
//		Point(1, 2);	// �̸����� ��ü, �ӽð�ü�� ����� ǥ���
						// ���ܸ� ������ ���� ���
		throw bad_url_exception(404);
					// �ӽð�ü�� ������ ���ܴ� ������ �޾Ƶ� �˴ϴ�.
					// catch �� ������ ���� �ı����� �ʽ��ϴ�.
	}

	return 0;
}
int main()
{
	try
	{
		connectServer();
	}
	catch (bad_url_exception& e)
	{
		std::cout << "���ܹ߻�. catch �ϸ� ���α׷� ��ӽ��డ��" << std::endl;
	}

	std::cout << "���α׷� ��� ����" << std::endl;
}