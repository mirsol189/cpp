// github.com/codenuri/cpp  �� �÷Ƚ��ϴ�
// 1_namespace1.cpp - 7page
#include <stdio.h>
// namespace 
// => ���α׷��� �ڵ带 ������ ��ҳ��� ��� �����ϴ� ����
// => ���α׷��� �������� �и� �Ҽ� �ְ�
// => �̸� �浹� ������ �ִ�.
namespace Audio
{
	void init()
	{
		printf("init Audio Module\n");
	}
}
namespace Video
{
	void init()
	{
		printf("init Video Module\n");
	}
	// Video ����, �Լ�, ��������, ����ü���� ��� �̾ȿ��� ����ϴ�.
}

int main()
{
	//init();
	Audio::init();
	Video::init();
}