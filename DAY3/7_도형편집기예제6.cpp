#include <iostream>
#include <vector>


// 6. ������ ���� 
//    ��ü���� ���迡�� ���Ǵ� �������� �ڵ� ��Ÿ�Ͽ� 
//    "�̸�"�� �ο� �Ѱ� - 23���� ������ ������ ����

// ���ۿ��� "GoF Design Pattern" �˻� 
// "Gangs of Four" : ���ڵ��� 4���� ������ �����Ѹ�..

// 7. prototype ���� : �ߺ��� �����, �ߺ��� �����ؼ� ��ü�� �����ϴ� ���
//					Clone()�����Լ��� ����� �ڵ��� �ٿ��� �̸�





class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }
	int getColor() const { return color; }

	virtual void draw() { std::cout << "draw shape" << std::endl; }

	// �ڽ��� ���纻�� ����� �����Լ��� �׻� �����ϰ� ���˴ϴ�.
	virtual Shape* Clone()
	{
		Shape* p = new Shape;
		p->color = color; // ���� �����ϰ� ����� ����
						  // ��� ����� ���� �� �ݴϴ�
		return p;
	}
};






class Rect : public Shape
{
public:
	virtual void draw() { std::cout << "draw rect" << std::endl; }

	virtual Shape* Clone()
	{
		Rect* p = new Rect;
		p->setColor( getColor()) ; 
		// �׿ܿ� x, y, w,h �� ������ �ݴϴ�.
		return p;
	}
};
// Rect* r = new Rect();
// Shape* p = r->Clone();





class Circle : public Shape
{
public:
	virtual void draw() { std::cout << "draw circle" << std::endl; }

	virtual Shape* Clone()
	{
		Circle* p = new Circle;
		p->setColor(getColor());
		return p;
	}
};

int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		// ���� ���� 1. ��ü�� ���������� OCP�� �����ϰ� �Ҽ� ������ ?
		// ===> "Abstract Factory" ������ �����ϸ� �˴ϴ�.

		// 2. Undo/Redo�� �������� ��� �ڵ带 �ۼ��ؾ� �ұ� ?
		// ===> "Command" ������ ������ ������.. 

		if (cmd == 1)
		{
			v.push_back(new Rect);
		}
		else if (cmd == 2)
			v.push_back(new Circle);


		else if (cmd == 9)
		{
			for (auto p : v)
				p->draw();
		}

		else if (cmd == 8)
		{
			std::cout << "���° ������ ���� �ұ�� >> ";

			int k;
			std::cin >> k;

			v.push_back(v[k]->Clone()); // ������.. 
						// � �������� �� �ʿ� �����ϴ�.
						// OCP �� �����ϴ� Ȯ�强�� �پ ������ �������Դϴ�.

		}
	}
}

