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
using namespace Audio;

int main()
{
	foo();
	Audio::foo();
}
// <stdio.h> �ȿ� 
int printf(const char* fmt, ...); // �� ������  �ֽ��ϴ�

// <cstdio> �ȿ���. 
#include <stdio.h>
namespace std
{
	using ::printf;
}
using namespace std; // �� �ڵ尡 �־ �ᱹ printf()�� �Ѱ� �̹Ƿ� �浹�����ϴ�.
