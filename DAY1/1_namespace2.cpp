#include <stdio.h>

// namespace �ȿ� ��ҿ� �����ϴ� 3���� ��� - 8 page 

namespace Audio
{
	void init() { printf("init Audio Module\n");}
}
namespace Video
{
	void init() { printf("init Video Module\n");}
}

// global namespace : ��� �̸� �������� ���ԵǾ� ���� ���� ����
void init() { printf("init global\n"); }

//using Video::init;

int main()
{
	// 1. ������ �̸��� ��� - qualified name lookup
	// Video::init();

	// 2. using declaration(����) ���
//	using Video::init; // Video �� init �Լ��� Video �̸����� ����Ҽ� �ְ� �ش޶�
	init();		// Video::init
	::init();	// :: �� global �� �ǹ� �մϴ�.

	// 3. using directive(���þ�) ���
	using namespace Video; // Video �̸� ������ ��� ���� Video 
						// �̸� ���� �����ϰڴ�.
						// �Լ� �� �Ǵ� �ۿ� ����� �ֽ��ϴ�.
						// �׷���,, �ǵ����̸� ������� ������.
						// ������ �̸��� �����ϴ�.
}