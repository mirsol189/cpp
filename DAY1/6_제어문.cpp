// 6_��� - 31 page

int foo()
{
	return 10;
}

int main()
{
	int ret1 = foo();

	if (ret1 == 10)
	{
	}

	// C++17 ���� �Ʒ� ó�� �����մϴ�.
	if (int ret2 = foo(); ret2 == 10)
	{
	}
}



