// 1_namespace4.cpp - 10 page
//#include <stdio.h> // printf �� ������������ �ֽ��ϴ�.
#include <cstdio>    // printf �� �������� �ְ� std �ȿ��� �ֽ��ϴ�.

// 1. C++ �� ������ "C���"�� ��� �Ϻ��� ���� �մϴ�
// 2. ����, �⺻�� C����� C++������ ���Ӱ� �����մϴ�.

//	C ���			C++ ���
// <xxx.h>		=>  <cxxx>
// <stdio.h>	=>  <cstdio>
// <string.h>	=>  <cstring>
// <stdlib.h>	=>  <cstdlib>

int main()
{
	// printf �� C ǥ�� �Լ��̱⵵ �ϰ�
	// C++ ǥ�� �̱⵵ �մϴ�. - C++�� C����� ��� ������ ����

	printf("hello\n");     // ok

	std::printf("hello\n");// ??
}
