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
		throw bad_url_exception(404);

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
	catch (file_not_found& e)
	{
		std::cout << "���ܹ߻�. catch �ϸ� ���α׷� ��ӽ��డ��" << std::endl;
	}
	catch (...) // ������ ������ ���� ��� ���ܸ� ���⼭ ó��.
	{

	}

	std::cout << "���α׷� ��� ����" << std::endl;
}
