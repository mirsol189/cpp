#include <iostream>
#include <vector>

// �ٽ� 3. ��� ����(�Ļ�Ŭ����)�� ������ Ư¡�� Shape(���Ŭ����)���� 
//        �־�� �Ѵ�. �׷���, Shape* �� �ش� Ư¡�� ����Ҽ� �ִ�.

// �ٽ� 4. ��� �Լ���, �Ļ� Ŭ������ ������ �ϰ� �Ǵ� ��� �Լ���
//		  �ݵ�� �����Լ��� �ؾ� �Ѵ�.


class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }
	int getColor() const { return color; }

	virtual void draw() { std::cout << "draw shape" << std::endl; }
};



class Rect : public Shape
{
public:
	virtual void draw() { std::cout << "draw rect" << std::endl; }
};

class Circle : public Shape
{
public:
	virtual void draw() { std::cout << "draw circle" << std::endl; }
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
	}
}

