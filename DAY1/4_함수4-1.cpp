#include <iostream>

template<typename T>
T square(T a)
{
	return a * a;
}

int main()
{
//	printf("%p\n", &square); // �ɱ�� ?
							// error. Ʋ(���ø�)�� �����Ͻ� �����Ϸ��� ����մϴ�.
							// �޸𸮿� �����ϴ� ���� �ƴմϴ�.

	printf("%p\n", &square<int>);// �̷��� �ϸ� �����Ϸ��� square(int)����
									// �����մϴ�.
}
