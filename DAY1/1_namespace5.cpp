// 1_namespace5.cpp
#include <cstdio>

void foo()
{
	printf("foo\n");
}
namespace Audio
{
	using ::foo; // 이렇게 표기하는 문법이 있습니다.
}

int main()
{
	foo();
	Audio::foo();
}