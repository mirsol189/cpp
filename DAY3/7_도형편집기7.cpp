#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	virtual ~Shape() {}  // ��� Ŭ���� �Ҹ��ڴ� �׻� �����Լ���!!

	void setColor(int c) { color = c; }
	int getColor() const { return color; }

	// ���� �Լ�     : �Ļ�Ŭ������ ������ ���ϸ� ���� ���� �ٲ�
	// ���� ���� �Լ� : �Ļ�Ŭ������ �� ������ �Ѵ�.

	virtual void draw() = 0;  // { std::cout << "draw shape" << std::endl; }

	virtual Shape* Clone() = 0;
};

class Rect : public Shape
{
public:
	virtual void draw() override 
	{ 
		std::cout << "draw rect" << std::endl; 
	}

	// �����Լ� �����ǽ� ��ȯ Ÿ���� �����Ҽ� �ֳ��� ? 
	// => �˴ϴ�.��, ��Ӱ����� Ÿ�����θ� 
//	virtual Shape* Clone() override // A 
	virtual Rect* Clone() override  // B
	{
		Rect* p = new Rect;
		p->setColor(getColor());
		return p;
	}
};
// �� Clone() �� Shape* �� ��ȯ�ߴٸ� 
// Rect* p1 = new Rect()    // Shape* ��ȯ��      Rect* ��ȯ��
// Shape* p2 = p1->Clone(); // ok				 ok
// Rect*  p3 = p1->Clone(); // error		     ok
//		static_cast<Rect*>(p1->Clone())�� ����	

// vector<Shape*> �̹Ƿ� &rect, &circle �� �ڵ�����!

// Shape* p1 = &rect;   // ok
// Shape* p2 = &circle; // ok


class Circle : public Shape
{
public:
	virtual void draw() override
	{ 
		std::cout << "draw circle" << std::endl; 
	}

	virtual Circle* Clone() override
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

			v.push_back(v[k]->Clone()); 

		}
	}
}

