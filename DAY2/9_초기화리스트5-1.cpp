// 9_�ʱ�ȭ����Ʈ5 - 1
#include <iostream>

int g = 10;

class Test
{
	// C++11�� field �ʱ�ȭ ����Ҷ�
	int v1 = 0;		// �̷��� ���ͷ� �ʱ�ȭ�� �����ϴ�. ���� ����ϼ���
	int v2 = ++g;	// ���� �̷� �ڵ�� ������� ������. ȥ���������ϴ�.

	// ä��â ���� :����� �迭�϶� ���� ��� �ֳ��� ?
	// C++11���ĸ� �ٷ� �ʱ�ȭ �˴ϴ�.
	int arr[5] = { 1,2,3,4,5 };

public:
	//	
	Test() {}				// Test() : v1(0), v2(++g){}
	Test(int n) :v2(n) {}   // Test(int n) : v1(0), v2(n) {}
};
int main()
{
	Test t1;
	Test t2(5);
	std::cout << g << std::endl; // 11
}