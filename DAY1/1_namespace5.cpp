// 1_namespace5.cpp
#include <cstdio>

void foo()
{
	printf("foo\n");
}
namespace Audio
{
	using ::foo; // �̷��� ǥ���ϴ� ������ �ֽ��ϴ�.
}

int main()
{
	foo();
	Audio::foo();
}