// ����1     152 page
#include <iostream>
#include <vector>

// �Ŀ� ����Ʈ ���� ���α׷��� ��ü�������� ����� ���ô�.
// 1. ��� ������ Ÿ��ȭ �ϸ� ���մϴ�

// 2. ��� ������ ������ ��� Ŭ������ �ִٸ� ��� ������ 
//    �ϳ��� vector�� �����Ҽ� �ִ�.

class Shape
{
};

class Rect : public Shape
{
public:
	void draw() { std::cout << "draw rect" << std::endl; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "draw circle" << std::endl; }
};

int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
		{
			//			Rect r;  // �̷��� �ϸ� {} ����� ��� �ı� �˴ϴ�.
			//			Rect* p = new Rect; // �̷��� �ؾ� ��������� �����Ҷ� ���� ��� ��밡��
			//			v.push_back(p);
			v.push_back(new Rect);
		}
		else if (cmd == 2)
			v.push_back(new Circle);

		else if (cmd == 9)
		{
			// ���ݱ��� ���� ��� ������ �׷� �ݴϴ�.
			for (auto p : v)
				p->draw();
		}
	}
}
// �� ���ڵ尡 �����ϱ�� ?
// �ذ�å�� ����� ??


