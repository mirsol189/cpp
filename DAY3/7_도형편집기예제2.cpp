// 예제1     152 page
#include <iostream>
#include <vector>

// 파워 포인트 같은 프로그램을 객체지향으로 만들어 봅시다.
// 1. 모든 도형을 타입화 하면 편리합니다

// 2. 모든 도형의 공통의 기반 클래스가 있다면 모든 도형을 
//    하나의 vector에 보관할수 있다.

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
			//			Rect r;  // 이렇게 하면 {} 벗어날때 즉시 파괴 됩니다.
			//			Rect* p = new Rect; // 이렇게 해야 명시적으로 제거할때 까지 계속 사용가능
			//			v.push_back(p);
			v.push_back(new Rect);
		}
		else if (cmd == 2)
			v.push_back(new Circle);

		else if (cmd == 9)
		{
			// 지금까지 만든 모든 도형을 그려 줍니다.
			for (auto p : v)
				p->draw();
		}
	}
}
// 왜 이코드가 에러일까요 ?
// 해결책은 뭘까요 ??


