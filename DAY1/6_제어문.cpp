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
	} // <== ���⼭ ret2 �ı�!

	// switch �� �����մϴ�
	switch (int n = foo(); n)
	{
	case 10: break;
	case 20: break;
	}


//	while (int count = 0; count < 10) // �̰͵� �ɱ�� ?
//	{								 // error. while�� ��������
//		++count;					 // �� �������ϳ��� ?
//	}								 // => �̹� for �� �ֽ��ϴ�.

//	int ret3;
//	if ( (ret3 = foo()) == 10)
}



