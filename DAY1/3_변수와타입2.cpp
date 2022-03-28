// 3_������Ÿ��2.cpp - 22 page
#include <iostream>

// �ϰ��� �ʱ�ȭ(uniform initialization) ���

struct Point
{
	int x = 0;
	int y = 0;
};

int main()
{
	int n1 = 0;
	int x1[2] = { 1,1 };
	Point pt1 = { 1,1 };

	// ��� ������ ������ �ϳ��� ���(uniform) ���� �ʱ�ȭ �Ҽ� �ְ�����
	// "�߰�ȣ �ʱ�ȭ(brace init)" �̶�� �θ��ϴ�.
	// C++11 ���� ���Ե� ����
	int n2 = { 0 };
	int x2[2] = { 1,1 };
	Point pt2 = { 1,1 };

	int n3 { 0 };
	int x3[2] { 1,1 };
	Point pt3 { 1,1 };

	// ����(direct) �ʱ�ȭ : = �� ���� �ʱ�ȭ
	// ����(copy)   �ʱ�ȭ : = �� �ִ� �ʱ�ȭ
	//		=> �� 2���� ��Ŀ��� �ణ�� ���̰� �ֽ��ϴ�. - 2���� �Ǵ� 3����

	//23 page ���� - prevent narrow
	int n4 = 3.4;	// ok.. ��, ����Ÿ �ս�.. ���� ���� �ڵ�
					// C/C++ �� ������ ��κ��� ���� ����

	int n5 = { 3.4 };	// error
	int n6{ 3.4 };		// error

	char c{ 500 };	// error. 500�� 1����Ʈ�� ������ �����ϴ�.
}



