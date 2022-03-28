// 6_제어문 - 31 page

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

	// C++17 부터 아래 처럼 가능합니다.
	if (int ret2 = foo(); ret2 == 10)
	{
	}
}



