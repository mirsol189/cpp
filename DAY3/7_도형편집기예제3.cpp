#include <iostream>
#include <vector>

// 핵심 3. 모든 도형(파생클래스)의 공통의 특징은 Shape(기반클래스)에도 
//        있어야 한다. 그래야, Shape* 로 해당 특징을 사용할수 있다.

// 핵심 4. 멤버 함수중, 파생 클래스가 재정의 하게 되는 멤버 함수는
//		  반드시 가상함수로 해야 한다.


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

